//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <RTTUtilities/TUCallCapabilitiesDelegate-Protocol.h>
#import <RTTUtilities/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class ACAccountStore, AXDispatchTimer, CNContactStore, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate>
{
    ACAccountStore *_accountStore;
    NSNumber *_callCapabilitiesSupportsTelephonyCalls;
    AXDispatchTimer *_icloudAccountConsolidator;
    AXDispatchTimer *_icloudRelayConsolidator;
    BOOL _headphoneJackSupportsTTY;
    CTXPCServiceSubscriptionContext *_defaultVoiceContext;
    unsigned long long _activeContextCount;
    NSSet *_allVoiceContexts;
    CNContactStore *_contactStore;
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_telephonyUpdateQueue;
    NSObject<OS_dispatch_queue> *_accountStoreQueue;
}

+ (id)relayPhoneNumberForContext:(id)arg1;
+ (BOOL)relayIsSupportedForContext:(id)arg1;
+ (BOOL)shouldUseRTTForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)hardwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)isOnlyRTTSupportedForContext:(id)arg1;
+ (BOOL)isRTTSupportedForContext:(id)arg1;
+ (BOOL)isTTYSupportedForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)isRelayRTTSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)isTTYSupported;
+ (BOOL)TTYSoftwareEnabledForAnyActiveContext;
+ (BOOL)TTYHardwareEnabledForAnyActiveContext;
+ (void)performCallCenterTask:(CDUnknownBlockType)arg1;
+ (id)sharedCallCenter;
+ (id)sharedUtilityProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountStoreQueue; // @synthesize accountStoreQueue=_accountStoreQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue; // @synthesize telephonyUpdateQueue=_telephonyUpdateQueue;
@property(retain, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain) NSSet *allVoiceContexts; // @synthesize allVoiceContexts=_allVoiceContexts;
@property unsigned long long activeContextCount; // @synthesize activeContextCount=_activeContextCount;
@property(retain) CTXPCServiceSubscriptionContext *defaultVoiceContext; // @synthesize defaultVoiceContext=_defaultVoiceContext;
- (BOOL)relayRTTIsSupported;
- (void)_icloudAccountChanged;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)iCloudRTTRelayDidChange:(id)arg1;
- (void)didChangeOutgoingRelayCallerID;
- (void)listenForCloudRelayChanges;
- (BOOL)currentProcessHandlesCloudRelay;
- (id)relayNumberForContext:(id)arg1;
- (BOOL)isTTYSupportedForContext:(id)arg1;
- (BOOL)isTTYOverIMSSupportedForContext:(id)arg1;
- (id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2;
- (id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2;
- (void)reloadDefaultVoiceContext;
- (BOOL)reloadRelayPhoneNumbers;
- (id)subscriptionContexts;
- (void)simLessSubscriptionsDidChange;
- (void)activeSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;
- (void)carrierSettingsDidChange;
- (id)labelFromUUID:(id)arg1;
- (id)phoneNumberFromUUID:(id)arg1;
- (id)contactPathForCall:(id)arg1;
- (BOOL)contactPathIsMe:(id)arg1;
- (id)ttyMeContact;
- (id)phoneNumberForContext:(id)arg1;
- (id)myPhoneNumber;
- (BOOL)relayIsSupported;
- (BOOL)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethodForContext:(id)arg1;
@property(retain) NSNumber *callCapabilitiesSupportsTelephonyCalls;
- (unsigned long long)currentPreferredTransportMethod;
- (void)headphoneStateChangedNotification:(id)arg1;
- (void)updateHeadphoneState;
- (void)didChangeTelephonyCallingSupport;
- (void)setTTYDictionaryAvailability:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

