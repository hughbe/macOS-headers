//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSScrubberDataSource-Protocol.h>
#import <AppKit/NSScrubberDelegate-Protocol.h>
#import <AppKit/NSTouchBarPressAndHoldTransposerDelegate-Protocol.h>

@class NSColor, NSColorList, NSScrubber, NSString, NSView;
@protocol NSTouchBarColorListPickerContainerView, NSTouchBarColorListPickerPressAndHoldPopUpDelegate;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorListPickerPressAndHoldPopUp : NSObject <NSScrubberDataSource, NSScrubberDelegate, NSTouchBarPressAndHoldTransposerDelegate>
{
    NSScrubber *_scrubber;
    NSColorList *_colorList;
    NSView<NSTouchBarColorListPickerContainerView> *_containerView;
    id <NSTouchBarColorListPickerPressAndHoldPopUpDelegate> _delegate;
    BOOL _presenting;
    BOOL _didBeginScrubberInteraction;
    NSColor *_selectedColor;
    long long _numberOfLighterColors;
    long long _numberOfDarkerColors;
}

@property long long numberOfDarkerColors; // @synthesize numberOfDarkerColors=_numberOfDarkerColors;
@property long long numberOfLighterColors; // @synthesize numberOfLighterColors=_numberOfLighterColors;
@property(copy) NSColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain) NSColorList *colorList; // @synthesize colorList=_colorList;
@property id <NSTouchBarColorListPickerPressAndHoldPopUpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCancelInteractingWithScrubber:(id)arg1;
- (void)didFinishInteractingWithScrubber:(id)arg1;
- (void)didBeginInteractingWithScrubber:(id)arg1;
- (void)scrubber:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)transposerDidCancel:(id)arg1;
- (void)transposerDidEnd:(id)arg1;
- (void)_transposerDidEnd:(id)arg1 cancelled:(BOOL)arg2;
- (void)dismiss;
- (void)showFromView:(id)arg1 inContainer:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

