//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCoreAnalyticsHelper : NSObject
{
}

+ (void)sendCTMFinishProcessingEventForAsset:(id)arg1 startDate:(id)arg2 isAutoReframe:(BOOL)arg3 isOnDemand:(BOOL)arg4;
+ (void)sendCTMScheduleAnalyticsForAsset:(id)arg1 isAutoReframe:(BOOL)arg2 isOnDemand:(BOOL)arg3;
+ (void)sendEventWithName:(id)arg1 eventData:(id)arg2;

@end

