//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/EspressoBrick-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLSubtractBroadcastableBrick : NSObject <EspressoBrick>
{
    _Bool _shapeInfoNeeded;
    NSArray *_inputRanks;
    NSArray *_outputRanks;
    NSArray *_inputShapes;
    NSArray *_outputShapes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
@property(readonly, nonatomic) _Bool shapeInfoNeeded; // @synthesize shapeInfoNeeded=_shapeInfoNeeded;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

