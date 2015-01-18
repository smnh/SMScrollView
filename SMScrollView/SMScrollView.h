//
//  SMScrollView.h
//  CustomScrollView
//
//  Created by smnh on 3/29/14.
//  Copyright (c) 2014 smnh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMScrollView : UIScrollView

// default NO, if YES, fits the content to scrollView's bounds by changing zoomScale
@property (nonatomic, assign) BOOL fitOnSizeChange;
// default YES, fits the content to bounds only if they are bigger than content, ignored if fitOnSizeChange == YES
@property (nonatomic, assign) BOOL upscaleToFitOnSizeChange;
// default NO, sticks content bounds to scrollView edges instead of keeping center point in center, ignored if fitOnSizeChange == YES
@property (nonatomic, assign) BOOL stickToBounds;
// default YES, centers scrollView content in the center of its bounds
@property (nonatomic, assign) BOOL centerZoomingView;
// The view that was added by addViewForZooming: method
@property (nonatomic, strong, readonly) UIView *viewForZooming;
// Double tap gesture recognizer that zooms in/out the content
@property (nonatomic, strong, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;

// Fits the content to scrollView's bounds by changing zoomScale.
// If fitOnSizeChange == YES, then this method is called automatically when scrollView's bounds have changed.
- (void)scaleToFit;
// Convenient method to add a view for zooming. The added view is available as viewForZooming property.
// Adding new view for zooming will remove the previously added one.
- (void)addViewForZooming:(UIView *)view;

@end
