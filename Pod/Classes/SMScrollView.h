//
//  SMScrollView.h
//  CustomScrollView
//
//  Created by smnh on 3/29/14.
//  Copyright (c) 2014 smnh. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * SMScrollView extends the functionality of UIScrollView.
 * See its property documentation for more info.
 */
@interface SMScrollView : UIScrollView

/**
 * If YES, scales the content to fit to scrollView bounds when they change.
 * If NO, the content point displayed in the center of scrollView bounds is
 * kept in the center after scrollView bounds have changed (for example after
 * interface orientation have changed).
 * Default NO
 */
@property (nonatomic, assign) BOOL fitOnSizeChange;

/**
 * If YES, scales the content to fit to scrollView bounds, but only if they are bigger than content.
 * Default YES. Ignored if fitOnSizeChange == YES
 */
@property (nonatomic, assign) BOOL upscaleToFitOnSizeChange;

/**
 * If YES, sticks content bounds to scrollView edges instead of keeping center point in center.
 * Default NO. Ignored if fitOnSizeChange == YES
 */
@property (nonatomic, assign) BOOL stickToBounds;

/**
 * Default YES, centers scrollView content in the center of its bounds
 */
@property (nonatomic, assign) BOOL centerZoomingView;

/**
 * The view that was added by addViewForZooming: method
 * @see addViewForZooming:
 */
@property (nonatomic, strong, readonly) UIView *viewForZooming;

/**
 * Double tap gesture recognizer that zooms in/out the content
 */
@property (nonatomic, strong, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;

/**
 * Scales the content to fit to scrollView bounds.
 * If fitOnSizeChange == YES, then this method is called automatically when scrollView's bounds change.
 */
- (void)scaleToFit;

/**
 * Convenient method to add a view for zooming. The added view is available as viewForZooming property.
 * Adding new view for zooming will remove the previously added one.
 * @see viewForZooming
 */
- (void)addViewForZooming:(UIView *)view;

@end
