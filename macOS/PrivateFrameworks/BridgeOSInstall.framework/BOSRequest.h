//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BOSBrainBundle, BOSUpdateBundle, BridgeOSSoftwareUpdateController, NSData, NSDictionary, NSString, NSURL, NSUUID, PKFirmwareBundleComponent;
@protocol OS_dispatch_queue;

@interface BOSRequest : NSObject
{
    BOOL _enableSSO;
    BOOL _showUI;
    BOOL _cleanInstall;
    BOOL _loopbackEnabled;
    BOOL _testModeEnabled;
    BOOL _shouldPurge;
    unsigned long long _action;
    NSURL *_updateBundleURL;
    NSURL *_brainBundleURL;
    PKFirmwareBundleComponent *_updateBundlePackageComponent;
    PKFirmwareBundleComponent *_brainBundlePackageComponent;
    NSString *_client;
    NSData *_appleConnectData;
    unsigned long long _maxRetriesAfterFatalError;
    unsigned long long _maxRetriesAfterConnectionFailure;
    NSString *_minimumBridgeOSVersionRequirement;
    NSURL *_bridgeOSSoftwareUpdateEventRecordingServiceURL;
    NSURL *_personalizationServerURL;
    NSURL *_predicateProductOriginatingCatalogURL;
    NSDictionary *_bridgeOSSoftwareUpdateControllerState;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned long long _retriesAfterFatalError;
    unsigned long long _retriesAfterConnectionFailure;
    BOSUpdateBundle *_updateBundle;
    BOSBrainBundle *_brainBundle;
    NSURL *_extractedUpdateBundleURL;
    NSURL *_extractedBrainBundleURL;
    BridgeOSSoftwareUpdateController *_customBridgeOSSoftwareUpdateController;
    NSUUID *_sessionUUID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property BOOL shouldPurge; // @synthesize shouldPurge=_shouldPurge;
@property(retain) BridgeOSSoftwareUpdateController *customBridgeOSSoftwareUpdateController; // @synthesize customBridgeOSSoftwareUpdateController=_customBridgeOSSoftwareUpdateController;
@property(retain) NSURL *extractedBrainBundleURL; // @synthesize extractedBrainBundleURL=_extractedBrainBundleURL;
@property(retain) NSURL *extractedUpdateBundleURL; // @synthesize extractedUpdateBundleURL=_extractedUpdateBundleURL;
@property(retain) BOSBrainBundle *brainBundle; // @synthesize brainBundle=_brainBundle;
@property(retain) BOSUpdateBundle *updateBundle; // @synthesize updateBundle=_updateBundle;
@property unsigned long long retriesAfterConnectionFailure; // @synthesize retriesAfterConnectionFailure=_retriesAfterConnectionFailure;
@property unsigned long long retriesAfterFatalError; // @synthesize retriesAfterFatalError=_retriesAfterFatalError;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSDictionary *bridgeOSSoftwareUpdateControllerState; // @synthesize bridgeOSSoftwareUpdateControllerState=_bridgeOSSoftwareUpdateControllerState;
@property(retain) NSURL *predicateProductOriginatingCatalogURL; // @synthesize predicateProductOriginatingCatalogURL=_predicateProductOriginatingCatalogURL;
@property(retain) NSURL *personalizationServerURL; // @synthesize personalizationServerURL=_personalizationServerURL;
@property(retain) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL; // @synthesize bridgeOSSoftwareUpdateEventRecordingServiceURL=_bridgeOSSoftwareUpdateEventRecordingServiceURL;
@property(retain) NSString *minimumBridgeOSVersionRequirement; // @synthesize minimumBridgeOSVersionRequirement=_minimumBridgeOSVersionRequirement;
@property unsigned long long maxRetriesAfterConnectionFailure; // @synthesize maxRetriesAfterConnectionFailure=_maxRetriesAfterConnectionFailure;
@property unsigned long long maxRetriesAfterFatalError; // @synthesize maxRetriesAfterFatalError=_maxRetriesAfterFatalError;
@property BOOL testModeEnabled; // @synthesize testModeEnabled=_testModeEnabled;
@property BOOL loopbackEnabled; // @synthesize loopbackEnabled=_loopbackEnabled;
@property BOOL cleanInstall; // @synthesize cleanInstall=_cleanInstall;
@property BOOL showUI; // @synthesize showUI=_showUI;
@property(retain) NSData *appleConnectData; // @synthesize appleConnectData=_appleConnectData;
@property BOOL enableSSO; // @synthesize enableSSO=_enableSSO;
@property(retain) NSString *client; // @synthesize client=_client;
@property(retain) PKFirmwareBundleComponent *brainBundlePackageComponent; // @synthesize brainBundlePackageComponent=_brainBundlePackageComponent;
@property(retain) PKFirmwareBundleComponent *updateBundlePackageComponent; // @synthesize updateBundlePackageComponent=_updateBundlePackageComponent;
@property(retain) NSURL *brainBundleURL; // @synthesize brainBundleURL=_brainBundleURL;
@property(retain) NSURL *updateBundleURL; // @synthesize updateBundleURL=_updateBundleURL;
@property unsigned long long action; // @synthesize action=_action;
- (id)bridgeOSSoftwareUpdateControllerOptions;
- (void)_setPropertiesFromOptions:(id)arg1;
- (BOOL)_parseArugments:(const char **)arg1 length:(int)arg2;
- (void)_printUsageForExecutableNamed:(id)arg1;
- (BOOL)clientContextIsEqualTo:(id)arg1;
- (id)clientContext;
- (id)errorUserInfo;
@property(readonly) NSString *actionDescription;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)initWithArgs:(const char **)arg1 length:(int)arg2;
- (id)init;

@end

