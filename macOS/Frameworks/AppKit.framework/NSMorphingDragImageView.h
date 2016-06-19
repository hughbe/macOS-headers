//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSImageView;

__attribute__((visibility("hidden")))
@interface NSMorphingDragImageView : NSView
{
    NSImageView *_previousImageView;
    NSImageView *_currentImageView;
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (id)_createImageView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

