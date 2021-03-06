#import <UIKit/UIKit.h>

@interface UIImage (WMFFocalImageDrawing)

/*
   Draws image with:

    - Aspect fill.
    - Horizontal center if horizontal overlap.
    - Align top if no focalBounds, else vertical centered on focalBounds.
    - Optional focalBounds highlight.
 */
- (void)wmf_drawInRect:(CGRect)rect
           focalBounds:(CGRect)focalBounds
        focalHighlight:(BOOL)focalHighlight
             blendMode:(CGBlendMode)blendMode
                 alpha:(CGFloat)alpha;

@end
