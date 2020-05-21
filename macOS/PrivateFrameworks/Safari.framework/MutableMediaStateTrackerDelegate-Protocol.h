//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class MutableMediaStateTracker;
@protocol MutableMediaSource;

@protocol MutableMediaStateTrackerDelegate <NSObject>

@optional
- (void)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 focusMutableMediaSource:(id <MutableMediaSource>)arg2;
- (void)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 toggleMediaCaptureInSource:(id <MutableMediaSource>)arg2;
- (BOOL)canUpdateOverallAudioStateForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (void)updateCaptureIconsForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
@end

