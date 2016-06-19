//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColorWell.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface NSFontPanelColorWell : NSColorWell
{
    NSImage *_bezelImage;
}

+ (id)_bezelRenderingButton;
@property(retain) NSImage *bezelImage; // @synthesize bezelImage=_bezelImage;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)drawColor;
- (void)_windowChangedKeyState;
- (void)setColor:(id)arg1;
- (void)_drawBorderInRect:(struct CGRect)arg1;
- (id)_bezelRenderingButton;
- (BOOL)_ownsColorPanelExclusively;
- (void)dealloc;

@end

