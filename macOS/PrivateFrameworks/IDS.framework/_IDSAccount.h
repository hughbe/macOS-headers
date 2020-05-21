//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSSet, NSString;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_accountConfig;
    NSString *_serviceToken;
    NSString *_uniqueID;
    NSString *_service;
    NSMutableArray *_devices;
    NSMutableArray *_suppressedDevices;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMapTable *_registrationDelegateToInfo;
    BOOL _devicesLoaded;
    BOOL _isEnabled;
    NSString *_loginID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loginID; // @synthesize loginID=_loginID;
- (void)deactivateAndPurgeIdentify;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)_connect;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak NSData *pushToken;
@property(readonly, nonatomic) __weak NSData *registrationCertificate;
@property(readonly, nonatomic) __weak NSArray *accountRegisteredURIs;
@property(readonly, nonatomic) __weak NSArray *registeredURIs;
- (id)_registeredURIs;
@property(readonly, nonatomic) __weak NSDate *dateRegistered;
@property(readonly, nonatomic) __weak NSDate *nextRegistrationDate;
- (id)_keychainRegistration;
- (void)_callCloudConnectedDevicesChanged;
- (void)_callConnectedDevicesChanged;
- (void)_callNearbyDevicesChanged;
- (void)_callDevicesChanged;
- (id)connectedDevices;
@property(readonly, nonatomic) NSArray *nearbyDevices;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic) NSArray *suppressedDevices;
- (void)_reloadCachedDevices;
- (void)_loadCachedDevices;
- (void)_updateDependentDevicesWithDevicesInfo:(id)arg1;
- (void)deactivateAlias:(id)arg1;
- (void)activateAlias:(id)arg1;
@property(readonly, nonatomic) NSSet *activeAliases;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSString *regionBasePhoneNumber;
@property(retain, nonatomic) NSString *regionID;
@property(readonly, nonatomic) NSString *userUniqueIdentifier;
@property(readonly, nonatomic) int profileValidationErrorReason;
@property(readonly, nonatomic) long long profileValidationStatus;
@property(readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) __weak NSString *profileID;
@property(readonly, nonatomic) int registrationStatus;
- (id)registrationInfo;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
@property(readonly, nonatomic) BOOL isUserDisabled;
@property(readonly, nonatomic) int accountType;
@property(nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSString *pushTopic;
@property(readonly, nonatomic) NSString *primaryServiceName;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSArray *handles;
- (BOOL)_isInvisibleAlias:(id)arg1;
@property(readonly, nonatomic) NSArray *aliasesToRegister;
@property(readonly, nonatomic) NSArray *vettedAliases;
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic) NSArray *aliasStrings;
@property(readonly, nonatomic) BOOL isUsableForOuterMessaging;
@property(readonly, nonatomic) BOOL canSend;
@property(readonly, nonatomic) __weak NSDictionary *regionServerContext;
@property(readonly, nonatomic) NSDictionary *profileInfo;
- (void)updateAccountWithAccountInfo:(id)arg1;
@property(retain, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL isTransientWhitelistedAccount;
@property(readonly, nonatomic) BOOL isInTransientRegistrationState;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1;
- (void)_callRegistrationDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)_isThumperService;
- (BOOL)_isiCloudPairingService;
- (void)dealloc;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

