//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase
{
    NSString *_payloadBundleIdentifier;
    NSNumber *_payloadNotificationsEnabled;
    NSNumber *_payloadShowInNotificationCenter;
    NSNumber *_payloadShowInLockScreen;
    NSNumber *_payloadAlertType;
    NSNumber *_payloadBadgesEnabled;
    NSNumber *_payloadSoundsEnabled;
    NSNumber *_payloadShowInCarPlay;
    NSNumber *_payloadEmergencyEnabled;
    NSNumber *_payloadCriticalAlertEnabled;
    NSNumber *_payloadGroupingType;
}

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1;
+ (id)buildWithBundleIdentifier:(id)arg1 withNotificationsEnabled:(id)arg2 withShowInNotificationCenter:(id)arg3 withShowInLockScreen:(id)arg4 withAlertType:(id)arg5 withBadgesEnabled:(id)arg6 withSoundsEnabled:(id)arg7 withShowInCarPlay:(id)arg8 withEmergencyEnabled:(id)arg9 withCriticalAlertEnabled:(id)arg10 withGroupingType:(id)arg11;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadGroupingType; // @synthesize payloadGroupingType=_payloadGroupingType;
@property(copy, nonatomic) NSNumber *payloadCriticalAlertEnabled; // @synthesize payloadCriticalAlertEnabled=_payloadCriticalAlertEnabled;
@property(copy, nonatomic) NSNumber *payloadEmergencyEnabled; // @synthesize payloadEmergencyEnabled=_payloadEmergencyEnabled;
@property(copy, nonatomic) NSNumber *payloadShowInCarPlay; // @synthesize payloadShowInCarPlay=_payloadShowInCarPlay;
@property(copy, nonatomic) NSNumber *payloadSoundsEnabled; // @synthesize payloadSoundsEnabled=_payloadSoundsEnabled;
@property(copy, nonatomic) NSNumber *payloadBadgesEnabled; // @synthesize payloadBadgesEnabled=_payloadBadgesEnabled;
@property(copy, nonatomic) NSNumber *payloadAlertType; // @synthesize payloadAlertType=_payloadAlertType;
@property(copy, nonatomic) NSNumber *payloadShowInLockScreen; // @synthesize payloadShowInLockScreen=_payloadShowInLockScreen;
@property(copy, nonatomic) NSNumber *payloadShowInNotificationCenter; // @synthesize payloadShowInNotificationCenter=_payloadShowInNotificationCenter;
@property(copy, nonatomic) NSNumber *payloadNotificationsEnabled; // @synthesize payloadNotificationsEnabled=_payloadNotificationsEnabled;
@property(copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

