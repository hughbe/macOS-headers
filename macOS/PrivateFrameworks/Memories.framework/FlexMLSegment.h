//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FlexMLSegment : NSObject
{
    NSArray *_gainFunction;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _trackTime;
    CDStruct_1b6d18a9 _summaryTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *gainFunction; // @synthesize gainFunction=_gainFunction;
@property(readonly, nonatomic) CDStruct_1b6d18a9 summaryTime; // @synthesize summaryTime=_summaryTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 trackTime; // @synthesize trackTime=_trackTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1 trackTime:(CDStruct_1b6d18a9)arg2 summaryTime:(CDStruct_1b6d18a9)arg3 gainFunction:(id)arg4;

@end

