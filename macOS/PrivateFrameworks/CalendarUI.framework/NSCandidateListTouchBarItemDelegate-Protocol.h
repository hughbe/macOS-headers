//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class NSCandidateListTouchBarItem;

@protocol NSCandidateListTouchBarItemDelegate <NSObject>

@optional
- (void)candidateListTouchBarItem:(NSCandidateListTouchBarItem *)arg1 changedCandidateListVisibility:(BOOL)arg2;
- (void)candidateListTouchBarItem:(NSCandidateListTouchBarItem *)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (void)candidateListTouchBarItem:(NSCandidateListTouchBarItem *)arg1 changeSelectionFromCandidateAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)candidateListTouchBarItem:(NSCandidateListTouchBarItem *)arg1 beginSelectingCandidateAtIndex:(long long)arg2;
@end

