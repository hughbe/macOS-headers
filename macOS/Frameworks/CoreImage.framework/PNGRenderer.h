//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CGRenderer.h>

__attribute__((visibility("hidden")))
@interface PNGRenderer : CGRenderer
{
    struct __CFURL *fullURL;
    struct CGColor *background;
    struct CGColorSpace *colorSpace;
}

- (struct CGImage *)cgimage;
- (void)flushRender;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

