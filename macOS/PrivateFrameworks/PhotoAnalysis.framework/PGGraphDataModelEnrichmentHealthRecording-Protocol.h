//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSDate;
@protocol PGGraphHealthRecording;

@protocol PGGraphDataModelEnrichmentHealthRecording <NSObject>
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id <PGGraphHealthRecording>)arg1;
- (void)recordCurrentProcessingDate:(NSDate *)arg1 lastProcessingDate:(NSDate *)arg2 graphHealthRecorder:(id <PGGraphHealthRecording>)arg3;
@end

