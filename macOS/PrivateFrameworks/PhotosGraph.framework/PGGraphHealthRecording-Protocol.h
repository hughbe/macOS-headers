//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate;

@protocol PGGraphHealthRecording <NSObject>
- (void)recordNumberOfHighlightEnrichmentTimeouts:(unsigned long long)arg1;
- (void)recordNumberOfHighlightEnrichmentsCancelled:(unsigned long long)arg1;
- (void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(NSDate *)arg1 currentEnrichmentDate:(NSDate *)arg2;
- (void)recordNumberOfGraphRebuildsCancelled:(unsigned long long)arg1;
- (void)recordNumberOfUnscheduledRebuilds:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildTimeouts:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildFailures:(unsigned long long)arg1;
- (void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(NSDate *)arg1 currentRebuildDate:(NSDate *)arg2;
@end

