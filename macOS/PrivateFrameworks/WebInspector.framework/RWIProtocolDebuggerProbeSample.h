//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *payload;
@property(nonatomic) double timestamp;
@property(nonatomic) int batchId;
@property(nonatomic) int sampleId;
@property(nonatomic) int probeId;
- (id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5;

@end

