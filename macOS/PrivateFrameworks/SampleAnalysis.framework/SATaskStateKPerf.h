//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SampleAnalysis/SATaskState.h>

__attribute__((visibility("hidden")))
@interface SATaskStateKPerf : SATaskState
{
    BOOL _filledSnap;
    BOOL _filledMem;
    BOOL _filledLatencyQoS;
}

@property BOOL filledLatencyQoS; // @synthesize filledLatencyQoS=_filledLatencyQoS;
@property BOOL filledMem; // @synthesize filledMem=_filledMem;
@property BOOL filledSnap; // @synthesize filledSnap=_filledSnap;

@end

