//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class NSScrubber, NSScrubberItemView;

@protocol NSScrubberDataSource <NSObject>
- (NSScrubberItemView *)scrubber:(NSScrubber *)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(NSScrubber *)arg1;
@end

