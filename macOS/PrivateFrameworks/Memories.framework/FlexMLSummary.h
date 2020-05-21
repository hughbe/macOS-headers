//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FlexMLSummary : NSObject
{
    float _peakValue;
    NSDictionary *_videoCues;
    NSArray *_allBeats;
    NSArray *_allBars;
    NSArray *_loopPoints;
    double _lkfsValue;
    NSArray *_segments;
    CDStruct_1b6d18a9 _duration;
}

+ (id)summaryFromSummaries:(id)arg1 targetTimeScale:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) float peakValue; // @synthesize peakValue=_peakValue;
@property(nonatomic) double lkfsValue; // @synthesize lkfsValue=_lkfsValue;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSArray *loopPoints; // @synthesize loopPoints=_loopPoints;
@property(readonly, nonatomic) NSArray *allBars; // @synthesize allBars=_allBars;
@property(readonly, nonatomic) NSArray *allBeats; // @synthesize allBeats=_allBeats;
@property(retain, nonatomic) NSDictionary *videoCues; // @synthesize videoCues=_videoCues;
- (id)initWithDictionary:(id)arg1 targetTimeScale:(int)arg2;

@end

