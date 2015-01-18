//
//  MainViewController.m
//  CustomScrollView
//
//  Created by smnh on 3/29/14.
//  Copyright (c) 2014 smnh. All rights reserved.
//

#import "MainViewController.h"
#import "SMScrollView.h"

@interface MainViewController ()
@property (nonatomic, strong) SMScrollView *myScrollView;
@end

@implementation MainViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    UIImageView *imageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"word-map.png"]];
    imageView.contentMode = UIViewContentModeScaleAspectFill;
    imageView.clipsToBounds = YES;

    self.myScrollView = [[SMScrollView alloc] initWithFrame:self.view.bounds];
    self.myScrollView.maximumZoomScale = 2;
    self.myScrollView.delegate = self;
    self.myScrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.myScrollView.contentSize = imageView.frame.size;
    self.myScrollView.alwaysBounceVertical = YES;
    self.myScrollView.alwaysBounceHorizontal = YES;
    self.myScrollView.stickToBounds = YES;
    [self.myScrollView addViewForZooming:imageView];
    [self.myScrollView scaleToFit];
    [self.view addSubview:self.myScrollView];

    UIView *verticalLine = [[UIView alloc] initWithFrame:CGRectMake(roundf(self.view.bounds.size.width / 2), 0.0, 1.0, self.view.bounds.size.height)];
    verticalLine.backgroundColor = [[UIColor redColor] colorWithAlphaComponent:0.5];
    verticalLine.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleLeftMargin;
    [self.view addSubview:verticalLine];

    UIView *horizontalLine = [[UIView alloc] initWithFrame:CGRectMake(0.0, roundf(self.view.bounds.size.height / 2), self.view.bounds.size.width, 1.0)];
    horizontalLine.backgroundColor = [[UIColor redColor] colorWithAlphaComponent:0.5];
    horizontalLine.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    [self.view addSubview:horizontalLine];
}

- (UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView {
    return self.myScrollView.viewForZooming;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation {
    return YES;
}

@end
