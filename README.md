SMScrollView
============

SMScrollView is a subclass of `UIScrollView` with following additions:

- Double-tap gesture to zoom in and out. Specifically, when the value of the `zoomScale` property euqals to the value 
of the `minimumZoomScale` property, the scrollview zooms the tapped point to the value defined by the `maximumZoomScale` 
property. Otherwise, when the value of the `zoomScale` property does not euqal to the value of the `minimumZoomScale` 
property, the scrollview zooms out to the value of the `minimumZoomScale` property.
- When possible, the content point displayed in the center of scrollview is kept in center when changing the interface 
orientation.
- If scrollview is scrolled to its boundaries, changing the interface orientation keeps the scrollview at these boundaries 
instead of keeping the center point. This behavior can be prevented by setting the value of the `stickToBounds` property 
to `NO`.
- If changing the interface orientation introduces more space to the zoomed view, it will be upscaled to a minimum of 1.0 
and a value that fits the zoomed view in scrollview bounds. This behavior can be prevented by setting the value of the 
`upscaleToFitOnSizeChange` property to `NO`.
