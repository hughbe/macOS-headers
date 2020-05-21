//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionView.h>

@interface MOCollectionView : UXCollectionView
{
    BOOL _isAutomating;
    BOOL _needsLiveScrollingAutomationCleanup;
    BOOL _needsScrollingScoreKeeperCleanup;
}

@property(nonatomic) BOOL isAutomating; // @synthesize isAutomating=_isAutomating;
- (void)cleanupAutomation;
- (void)automationDidEnd;
- (void)automationWillBegin;
- (void)_automatedLiveScrollingDidEnd;
- (void)_automatedLiveScrollingWillBegin;
- (void)cleanupLiveScrollingAutomation;
- (void)automateLiveScrollingWithRecordingPasteboardData;
- (void)automateLiveScrollingWithRecordingFilePath:(id)arg1;
- (void)_automateLiveScrollingWithRecordingData:(id)arg1;
- (void)automateLiveScrollingWithLaps:(unsigned long long)arg1 andStepSize:(double)arg2;
- (void)automateLiveScrolling;
- (void)disableScrollingScoreKeeper;
- (void)enableScrollingScoreKeeper;
- (BOOL)isScrollingScoreKeeperEnabled;
- (id)mediaView;
- (void)_willTerminateNotification;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

