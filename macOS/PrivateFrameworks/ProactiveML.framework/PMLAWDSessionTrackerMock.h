//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker
{
    NSMutableArray *_internalTrackedSessions;
    NSArray *_trackedSessions;
}

- (void).cxx_destruct;
@property(readonly) NSArray *trackedSessions; // @synthesize trackedSessions=_trackedSessions;
- (void)clearTrackedSessions;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

