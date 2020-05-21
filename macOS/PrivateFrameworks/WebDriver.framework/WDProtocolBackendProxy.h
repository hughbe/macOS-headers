//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WDProtocolModel;
@protocol WDSessionHost;

@interface WDProtocolBackendProxy : NSObject
{
    id <WDSessionHost> _sessionHost;
    WDProtocolModel *_model;
    long long _nextSequenceId;
    NSMutableDictionary *_pendingResponses;
    CDUnknownBlockType _protocolEventHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType protocolEventHandler; // @synthesize protocolEventHandler=_protocolEventHandler;
- (void)cancelPendingResponsesWithErrorMessage:(id)arg1;
- (void)sendCommand:(id)arg1 parameters:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)dispatchMessageToFrontend:(id)arg1;
- (id)initWithProtocolAtURL:(id)arg1;
- (id)initWithSessionHost:(id)arg1 protocolWithURL:(id)arg2;

@end

