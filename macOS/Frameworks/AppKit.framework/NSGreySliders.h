//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColorSpaceSliders.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface NSGreySliders : NSColorSpaceSliders
{
    id greySlider;
    id greyText;
    NSView *_greyView;
    id greyButtons[5];
    id opacityButtons;
    double opacityDistanceFromBottom;
    BOOL alphaButtonsAreHidden;
}

+ (id)genericColorSpace;
@property(retain) NSView *greyView; // @synthesize greyView=_greyView;
- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (void)adjustControls:(id)arg1;
- (BOOL)worksWhenModal;
- (void)jumpSlider:(id)arg1;
- (id)regularColorIfPossible:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (id)fieldEditableControl;
- (void)dealloc;
- (id)provideNewSubview:(id)arg1;
@property id greyButton4;
@property id greyButton3;
@property id greyButton2;
@property id greyButton1;
@property id greyButton0;
- (void)setGreyButton5:(id)arg1;
- (void)_configureGreyButton:(id)arg1 index:(long long)arg2;

@end

