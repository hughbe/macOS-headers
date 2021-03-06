//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemExtensions/_OSSystemExtensionServerToClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OSSystemExtensionRequestDelegate, OS_dispatch_queue;

@interface OSSystemExtensionRequest : NSObject <_OSSystemExtensionServerToClientInterface>
{
    id <OSSystemExtensionRequestDelegate> _delegate;
    NSString *_identifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)deactivationRequestForExtension:(id)arg1 queue:(id)arg2;
+ (id)activationRequestForExtension:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <OSSystemExtensionRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failedWithError:(id)arg1;
- (void)activatedWithResult:(long long)arg1;
- (void)needsUserApproval;
- (void)requestReplacementActionForExistingExtension:(id)arg1 withExtension:(id)arg2;
- (void)didConnectToDaemon;
- (void)tearDown;
- (void)connectToDaemon;
- (void)start;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

