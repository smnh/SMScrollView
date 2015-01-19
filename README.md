# SMScrollView

[![Version](https://img.shields.io/cocoapods/v/SMScrollView.svg?style=flat)](http://cocoadocs.org/docsets/SMScrollView)
[![License](https://img.shields.io/cocoapods/l/SMScrollView.svg?style=flat)](http://cocoadocs.org/docsets/SMScrollView)
[![Platform](https://img.shields.io/cocoapods/p/SMScrollView.svg?style=flat)](http://cocoadocs.org/docsets/SMScrollView)

`SMScrollView` is a subclass of `UIScrollView` with extended functionality

## Installation

SMScrollView is available through [CocoaPods](http://cocoapods.org). To install it, simply add the following line to your Podfile:

    pod "SMScrollView"

If you are not using [CocoaPods](http://cocoapods.org), then just copy files from `Pod/Classes` to your project.

## Description

- SMScrollView maintains the position of its zooming view returned by its `delegate`'s `viewForZoomingInScrollView:` in the center of its own boundaries.
![center-zooming-view](https://cloud.githubusercontent.com/assets/97896/5738192/29249ba2-9bf2-11e4-81ea-c7ed2ea58833.png)
- SMScrollView has double-tap gesture to zoom in and out its zooming view. Specifically, when its `zoomScale == minimumZoomScale`, it zooms-in the view to the tapped point and to the scale defined by by the `maximumZoomScale`. Otherwise, when `zoomScale > minimumZoomScale`, it zooms-out to a scale defined by the `minimumZoomScale`. The double-tap gesture is available through the `doubleTapGestureRecognizer` property to disable or adjust the gesture behaviour.
![double-tap-to-zoom](https://cloud.githubusercontent.com/assets/97896/5738194/2929502a-9bf2-11e4-86a4-06367f28befd.png)
- When SMScrollView's bounds are changed, for example due to a change in an interface orientation, then:
  1. If its `fitOnSizeChange == YES`, then its content is rescaled to fit its new size, up to the scale of 1.0, such that content is never stretched.
  ![fit-on-size-change](https://cloud.githubusercontent.com/assets/97896/5738193/2929067e-9bf2-11e4-895e-1f7c4798f64b.png)
  2. If `fitOnSizeChange == NO`, then the content point that was displayed in the center of its bounds before the size change, is kept in center after the size change. However, if `stickToBounds` property was set to `YES` and the scroll-view was scrolled to one of its boundaries before the size change, then it is kept at these boundaries instead of keeping the center point in center.
  ![maintain-center-point](https://cloud.githubusercontent.com/assets/97896/5738195/292994cc-9bf2-11e4-9e82-6509be403bdb.png)

## License

SMScrollView is available under the MIT license. See the LICENSE file for more info.
