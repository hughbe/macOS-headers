//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXVoicemailProviderHostProtocol-Protocol.h>
#import <CallKit/CXVoicemailProviderVendorProtocol-Protocol.h>

@class NSString, NSURL;
@protocol CXVoicemailProviderVendorProtocol, CXVoicemailSourceDelegate, OS_dispatch_queue;

@interface CXVoicemailSource : NSObject <CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol>
{
    BOOL _connected;
    id <CXVoicemailSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <CXVoicemailSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)reportVoicemailsRemovedWithUUIDs:(id)arg1;
- (oneway void)reportVoicemailsUpdated:(id)arg1;
- (oneway void)reportNewVoicemailsWithUpdates:(id)arg1;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)registerWithConfiguration:(id)arg1;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property(readonly, nonatomic) int processIdentifier;
- (id)bundle;
@property(readonly, copy, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <CXVoicemailProviderVendorProtocol> vendorProtocolDelegate;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

