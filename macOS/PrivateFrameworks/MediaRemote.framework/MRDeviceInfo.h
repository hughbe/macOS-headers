//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, _MRDeviceInfoMessageProtobuf;

__attribute__((visibility("hidden")))
@interface MRDeviceInfo : NSObject
{
    BOOL _tightSyncGroup;
    BOOL _pairingAllowed;
    BOOL _supportsSystemPairing;
    BOOL _supportsACL;
    BOOL _supportsSharedQueue;
    BOOL _proxyGroupPlayer;
    BOOL _connected;
    BOOL _supportsExtendedMotion;
    BOOL _groupLeader;
    BOOL _airPlayActive;
    NSString *_name;
    NSString *_identifier;
    NSString *_localizedModelName;
    NSString *_buildVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_systemMediaApplication;
    NSString *_deviceUID;
    NSString *_localReceiverPairingIdentity;
    NSString *_managedConfigurationDeviceIdentifier;
    unsigned long long _protocolVersion;
    long long _type;
    unsigned long long _groupedDeviceCount;
    NSString *_tightSyncUID;
    NSString *_groupUID;
    NSString *_groupName;
    NSString *_senderDefaultGroupUID;
    unsigned long long _sharedQueueVersion;
    NSData *_bluetoothAddress;
    unsigned long long _groupLogicalDeviceCount;
    NSArray *_groupedDevices;
    NSArray *_airPlayReceivers;
    NSString *_linkAgent;
    NSString *_systemPodcastApplication;
}

+ (id)networkIdentifier;
+ (long long)type;
+ (id)currentDeviceInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemPodcastApplication; // @synthesize systemPodcastApplication=_systemPodcastApplication;
@property(readonly, copy, nonatomic) NSString *linkAgent; // @synthesize linkAgent=_linkAgent;
@property(copy, nonatomic) NSArray *airPlayReceivers; // @synthesize airPlayReceivers=_airPlayReceivers;
@property(nonatomic, getter=isAirPlayActive) BOOL airPlayActive; // @synthesize airPlayActive=_airPlayActive;
@property(nonatomic, getter=isGroupLeader) BOOL groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) NSArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property(nonatomic) unsigned long long groupLogicalDeviceCount; // @synthesize groupLogicalDeviceCount=_groupLogicalDeviceCount;
@property(copy, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) BOOL supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer; // @synthesize proxyGroupPlayer=_proxyGroupPlayer;
@property(nonatomic) unsigned long long sharedQueueVersion; // @synthesize sharedQueueVersion=_sharedQueueVersion;
@property(nonatomic) BOOL supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(nonatomic) BOOL supportsACL; // @synthesize supportsACL=_supportsACL;
@property(nonatomic) BOOL supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property(nonatomic, getter=isPairingAllowed) BOOL pairingAllowed; // @synthesize pairingAllowed=_pairingAllowed;
@property(readonly, nonatomic, getter=isTightSyncGroup) BOOL tightSyncGroup; // @synthesize tightSyncGroup=_tightSyncGroup;
@property(copy, nonatomic) NSString *senderDefaultGroupUID; // @synthesize senderDefaultGroupUID=_senderDefaultGroupUID;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property(copy, nonatomic) NSString *tightSyncUID; // @synthesize tightSyncUID=_tightSyncUID;
@property(readonly, nonatomic) unsigned long long groupedDeviceCount; // @synthesize groupedDeviceCount=_groupedDeviceCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy, nonatomic) NSString *managedConfigurationDeviceIdentifier; // @synthesize managedConfigurationDeviceIdentifier=_managedConfigurationDeviceIdentifier;
@property(readonly, copy, nonatomic) NSString *localReceiverPairingIdentity; // @synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity;
@property(copy, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(copy, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithOutputDevice:(id)arg1;

@end

