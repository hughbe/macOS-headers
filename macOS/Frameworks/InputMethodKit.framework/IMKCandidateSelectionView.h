//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class IMKUIWindowBasedCandidateController, NSArray, NSButton;

@interface IMKCandidateSelectionView : IMKUIView
{
    NSArray *_buttons;
    IMKUIWindowBasedCandidateController *_candidateController;
    unsigned long long _selectedIndex;
    NSArray *_sortingModes;
    NSButton *_radarButton;
}

+ (double)minimumWidthForSelectionModesWithRadarButton:(id)arg1;
+ (double)minimumWidthForSelectionModes:(id)arg1;
+ (double)totalButtonWidthWithButtons:(id)arg1;
+ (id)_radarButtonWithTag:(long long)arg1 target:(id)arg2 properties:(id)arg3;
+ (id)_buttonWithTitle:(id)arg1 fontSize:(double)arg2 tag:(long long)arg3 target:(id)arg4 properties:(id)arg5;
@property(retain, nonatomic) NSButton *radarButton; // @synthesize radarButton=_radarButton;
@property(retain, nonatomic) NSArray *sortingModes; // @synthesize sortingModes=_sortingModes;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) IMKUIWindowBasedCandidateController *candidateController; // @synthesize candidateController=_candidateController;
- (void)drawRect:(struct CGRect)arg1;
- (void)update;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSortingModes:(id)arg1 localizedNames:(id)arg2;
- (void)setButtonFrames;
- (void)resetRadarButtonState;
- (void)_buttonSelected:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;

@end

