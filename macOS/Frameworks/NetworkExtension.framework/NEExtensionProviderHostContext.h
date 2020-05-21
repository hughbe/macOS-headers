//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <NetworkExtension/NEExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionProviderProtocol-Protocol.h>

@class NEUserNotification, NSData, NSString, NSUUID, NSXPCConnection;
@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>
{
    id <NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
    BOOL _stopped;
    id <NEExtensionProviderHostDelegate> _delegate;
    NSXPCConnection *_vendorConnection;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *vendorConnection; // @synthesize vendorConnection=_vendorConnection;
@property(nonatomic) BOOL stopped; // @synthesize stopped=_stopped;
@property __weak id <NEExtensionProviderHostDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyValueForEntitlement:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startedWithError:(id)arg1;
- (void)dispose;
- (void)createWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
@property(readonly) NSData *auditTokenData;
@property(readonly) NSUUID *uuid;
@property(readonly) int pid;
- (id)vendorContext;
- (void)setDescription:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithVendorEndpoint:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

