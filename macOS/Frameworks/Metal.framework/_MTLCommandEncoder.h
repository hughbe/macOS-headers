//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

@class NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice;

@interface _MTLCommandEncoder : _MTLObjectWithLabel
{
    id <MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    BOOL _StatEnabled;
    unsigned long long _numCommands;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

@property(readonly, nonatomic) unsigned long long numThisCommand; // @synthesize numThisCommand=_numCommands;
@property(nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property(readonly, nonatomic) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) unsigned long long dispatchType; // @dynamic dispatchType;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=getType) unsigned long long type;
- (void)incNumCommands;
- (struct MTLStatSampleRec *)newSample;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)commandBuffer;
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

// Remaining properties
@property(copy) NSString *label; // @dynamic label;

@end

