//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface TintedImageRep : NSImageRep
{
    NSImage *_image;
    NSColor *_tintColor;
}

- (void).cxx_destruct;
- (BOOL)draw;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2;

@end

