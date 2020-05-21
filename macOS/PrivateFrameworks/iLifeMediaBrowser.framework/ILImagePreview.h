//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface ILImagePreview : NSView
{
    BOOL _animates;
    BOOL _autoresizes;
    BOOL _supportsDragAndDrop;
    struct CGSize _imageSize;
    id _delegate;
}

- (void).cxx_destruct;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property BOOL autoresizes; // @synthesize autoresizes=_autoresizes;
@property BOOL animates; // @synthesize animates=_animates;
- (struct CGRect)fitImageRect;
- (void)_dragSelectionWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGImage *)createThumbnailOfSize:(unsigned long long)arg1;
- (void)setImageWithURL:(id)arg1;
@property NSColor *backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

