//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPSceneChangeSegment : NSObject
{
    unsigned long long _numOfFrames;
    CDStruct_e83c9415 _timeRange;
}

@property(readonly, nonatomic) unsigned long long numOfFrames; // @synthesize numOfFrames=_numOfFrames;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;
- (void)mergeSegment:(id)arg1;
- (void)resetSegment:(CDStruct_1b6d18a9)arg1;
- (void)updateSegment:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end

