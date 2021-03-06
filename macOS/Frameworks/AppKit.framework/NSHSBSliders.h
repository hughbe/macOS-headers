//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColorSpaceSliders.h>

@class NSColor, NSView;

__attribute__((visibility("hidden")))
@interface NSHSBSliders : NSColorSpaceSliders
{
    id hueSlider;
    id saturationSlider;
    id brightnessSlider;
    id hueText;
    id saturationText;
    id brightnessText;
    NSView *_hsbView;
    NSColor *currColor;
    NSColor *backgroundColor;
    id sliderMatrix;
}

+ (id)genericColorSpace;
@property(retain) NSView *hsbView; // @synthesize hsbView=_hsbView;
- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (void)adjustControls:(id)arg1;
- (BOOL)worksWhenModal;
- (void)viewSizeChanged:(id)arg1;
- (struct CGSize)requiredMinSize;
- (id)regularColorIfPossible:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (id)fieldEditableControl;
- (id)provideNewSubview:(id)arg1;
- (void)dealloc;

@end

