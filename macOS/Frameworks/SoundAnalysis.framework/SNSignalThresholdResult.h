//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSString;

@interface SNSignalThresholdResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding>
{
    CDStruct_e83c9415 timeRange;
}

- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

