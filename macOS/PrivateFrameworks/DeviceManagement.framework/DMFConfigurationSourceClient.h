//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/DMFConfigurationSourceClientInterface-Protocol.h>
#import <DeviceManagement/NSXPCConnectionDelegate-Protocol.h>
#import <DeviceManagement/NSXPCListenerDelegate-Protocol.h>

@class CATOperationQueue, DMFConnection, DMFReportingRequirements, NSString, NSXPCConnection, NSXPCListener;
@protocol DMFConfigurationSourceClientDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface>
{
    DMFReportingRequirements *_reportingRequirements;
    id <DMFConfigurationSourceClientDelegate> _delegate;
    unsigned long long _state;
    DMFConnection *_connection;
    NSXPCListener *_listener;
    NSXPCConnection *_incomingConnection;
    NSObject *_reportingRequirementsLock;
    NSString *_configurationSourceName;
    NSString *_organizationIdentifier;
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CATOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_registerConfigurationSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *registerConfigurationSource; // @synthesize registerConfigurationSource=_registerConfigurationSource;
@property(retain, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *configurationSourceName; // @synthesize configurationSourceName=_configurationSourceName;
@property(retain, nonatomic) NSObject *reportingRequirementsLock; // @synthesize reportingRequirementsLock=_reportingRequirementsLock;
@property(retain, nonatomic) NSXPCConnection *incomingConnection; // @synthesize incomingConnection=_incomingConnection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) DMFConnection *connection; // @synthesize connection=_connection;
@property unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <DMFConfigurationSourceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configurationEngineRequestedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configurationEventsDidChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configurationStatusDidChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)probe:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)assetResolutionOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueOperationToResolveAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eventsReportingOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueOperationToReportEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusReportingOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueOperationToReportStatusChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registrationOperationDidFinish:(id)arg1;
- (void)registerConfigurationSourceIfNeeded;
- (id)machService;
- (id)name;
@property(readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)stateDescription;
- (void)invalidate;
- (void)resume;
@property(copy, nonatomic) DMFReportingRequirements *reportingRequirements;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 organizationIdentifier:(id)arg2 displayName:(id)arg3 localMachServiceName:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

