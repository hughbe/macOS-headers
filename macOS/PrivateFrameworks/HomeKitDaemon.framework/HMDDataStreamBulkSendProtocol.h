//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol HMDDataStreamProtocolDelegate, OS_dispatch_queue;

@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate>
{
    BOOL _isConnected;
    unsigned int _nextSessionIdentifier;
    id <HMDDataStreamProtocolDelegate> _dataStream;
    NSObject<OS_dispatch_queue> *_queue;
    id _accessory;
    NSMapTable *_listeners;
    NSString *_logIdentifier;
    NSMapTable *_activeBulkSendSessions;
    NSMutableDictionary *_pendingBulkSendSessionContextBySessionIdentifier;
    CDUnknownBlockType _bulkSendSessionContextFactory;
}

+ (id)logCategory;
+ (id)protocolName;
- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType bulkSendSessionContextFactory; // @synthesize bulkSendSessionContextFactory=_bulkSendSessionContextFactory;
@property(readonly) NSMutableDictionary *pendingBulkSendSessionContextBySessionIdentifier; // @synthesize pendingBulkSendSessionContextBySessionIdentifier=_pendingBulkSendSessionContextBySessionIdentifier;
@property(readonly) NSMapTable *activeBulkSendSessions; // @synthesize activeBulkSendSessions=_activeBulkSendSessions;
@property unsigned int nextSessionIdentifier; // @synthesize nextSessionIdentifier=_nextSessionIdentifier;
@property(readonly, copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) __weak id accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
- (void)timerDidFire:(id)arg1;
- (void)_startSessionForFileType:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)startSessionForFileType:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_sendAckMessageWithIdentifier:(id)arg1;
- (void)_sendCloseMessageWithIdentifier:(id)arg1 reason:(unsigned short)arg2;
- (void)_cancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(BOOL)arg3;
- (void)_pumpReceiveFailure:(id)arg1 session:(id)arg2;
- (void)_pumpMessage:(id)arg1 session:(id)arg2;
- (void)_handleDataMessage:(id)arg1;
- (void)_handleCloseMessage:(id)arg1;
- (void)_handleOpenWithRequestHeader:(id)arg1 payload:(id)arg2;
- (void)_removeBulkSendSessionForSessionIdentifier:(id)arg1;
- (id)_getBulkSendSessionForSessionIdentifier:(id)arg1;
- (void)_rejectSessionCandidate:(id)arg1 status:(unsigned short)arg2;
- (void)_startSessionCandidate:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_createSessionIdentifier;
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 status:(unsigned short)arg2;
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 bulkSendStatus:(unsigned short)arg2;
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 streamIdentifier:(id)arg2;
- (id)_createSessionFromCandidate:(id)arg1 queue:(id)arg2;
- (id)_createSessionCandidateWithRequestHeader:(id)arg1;
- (void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(BOOL)arg3;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didRejectWithStatus:(unsigned short)arg2;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didAcceptOnQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStreamDidOpen:(id)arg1;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)_closeAllSessionsWithError:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 fileType:(id)arg2;
- (id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3 bulkSendSessionContextFactory:(CDUnknownBlockType)arg4;
- (id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

