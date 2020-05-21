//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate>
{
    struct _opaque_pthread_mutex_t stateLock;
    NSMutableArray *streamArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
    NSMutableDictionary *_vcMomentsCollectorDictionary;
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)defaultManager;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (id)textStreamWithStreamToken:(long long)arg1;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStreamDidInterruptionEnd:(id)arg1;
- (void)vcMediaStreamDidInterruptionBegin:(id)arg1;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
- (void)pauseStreams:(BOOL)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

