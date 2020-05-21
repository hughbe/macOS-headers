//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDSettingsControllerDependency-Protocol.h>

@class HMDSettingsMessageHandler, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDSettingTransactionReceiverProtocol, HMDSettingsBackingStoreController, HMDSettingsMessageHandlerProtocol, HMDSettingsMetadataParserProtocol, OS_dispatch_queue;

@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency>
{
    NSUUID *_parentIdentifier;
    NSString *_logIdentifier;
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;
    id <HMDSettingsBackingStoreController> _backingStoreController;
    NSString *_codingKey;
    id <HMDSettingsMetadataParserProtocol> _metadataParser;
    NSString *_metadataFileName;
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *_internalMessageHandler;
}

- (void).cxx_destruct;
@property(retain) HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *internalMessageHandler; // @synthesize internalMessageHandler=_internalMessageHandler;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *metadataFileName; // @synthesize metadataFileName=_metadataFileName;
@property(readonly) id <HMDSettingsMetadataParserProtocol> metadataParser; // @synthesize metadataParser=_metadataParser;
@property(readonly) NSString *codingKey; // @synthesize codingKey=_codingKey;
@property(retain) id <HMDSettingsBackingStoreController> backingStoreController; // @synthesize backingStoreController=_backingStoreController;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (id)createSettingModelWithName:(id)arg1 parent:(id)arg2 type:(id)arg3 properties:(id)arg4;
- (id)createSettingGroupModelWithName:(id)arg1 parent:(id)arg2;
- (id)createSettingRootGroupModelWithParentModelID:(id)arg1;
- (id)loadMetadata;
- (id)settingValueForValue:(id)arg1 type:(id)arg2 constraintModels:(id)arg3 error:(id *)arg4;
- (id)settingModelForUpdateWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 value:(id)arg3;
@property(readonly) id <HMDSettingsMessageHandlerProtocol> messageHandler;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 backingStoreController:(id)arg3 isCurrentUser:(BOOL)arg4;
- (id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

