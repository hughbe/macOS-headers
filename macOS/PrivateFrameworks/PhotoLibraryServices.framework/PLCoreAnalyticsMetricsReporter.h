//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLMetricsReporter-Protocol.h>

@class NSString;

@interface PLCoreAnalyticsMetricsReporter : NSObject <PLMetricsReporter>
{
}

- (id)_eventNameForEvent:(id)arg1;
- (void)reportMetricsEvents:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

