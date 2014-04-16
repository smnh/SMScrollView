//
//  SMScrollView.h
//  CustomScrollView
//
//  Created by smnh on 3/29/14.
//  Copyright (c) 2014 smnh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMScrollView : UIScrollView

@property (nonatomic, assign) BOOL downscaleToFitOnSizeChange;
@property (nonatomic, assign) BOOL upscaleToFitOnSizeChange;
@property (nonatomic, assign) BOOL stickToBounds;
@property (nonatomic, strong, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;

- (void)scaleToFit;

@end
