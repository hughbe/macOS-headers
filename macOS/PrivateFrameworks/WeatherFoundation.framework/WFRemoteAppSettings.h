//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFSettings-Protocol.h>

@class NSDate, NSSet, NSString, NSURL;

@interface WFRemoteAppSettings : NSObject <WFSettings>
{
    float _dataSamplingRate;
    NSString *_apiVersion;
    NSString *_apiVersionFallback;
    NSSet *_aqiEnabledCountryCodes;
    unsigned long long _networkFailedAttemptsLimit;
    unsigned long long _networkSwitchExpirationTimeInSeconds;
    unsigned long long _locationNumDecimalsOfPrecision;
    NSURL *_appAnalyticsEndpointUrl;
    double _userIdentifierResetTimeInterval;
    double _privateUserIdentifierResetTimeInterval;
    long long _appConfigRefreshRate;
    NSDate *_lastModificationDate;
    NSString *_bundleID;
    NSString *_countryCode;
    unsigned long long _apiConfigModdedHash;
    unsigned long long _apiConfigMinRange;
    unsigned long long _apiConfigMaxRange;
}

+ (BOOL)wfSeedBuild;
+ (BOOL)wfInternalBuild;
+ (BOOL)useInternalBundleID;
+ (id)bundleIDsListFor:(id)arg1 useInternalBundleID:(BOOL)arg2 useSeedBundleID:(BOOL)arg3;
+ (id)defaultSettings;
+ (id)configurationWithData:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4 error:(id *)arg5;
+ (id)configurationWithData:(id)arg1 userID:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long apiConfigMaxRange; // @synthesize apiConfigMaxRange=_apiConfigMaxRange;
@property(readonly, nonatomic) unsigned long long apiConfigMinRange; // @synthesize apiConfigMinRange=_apiConfigMinRange;
@property(readonly, nonatomic) unsigned long long apiConfigModdedHash; // @synthesize apiConfigModdedHash=_apiConfigModdedHash;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) long long appConfigRefreshRate; // @synthesize appConfigRefreshRate=_appConfigRefreshRate;
@property(readonly, nonatomic) double privateUserIdentifierResetTimeInterval; // @synthesize privateUserIdentifierResetTimeInterval=_privateUserIdentifierResetTimeInterval;
@property(readonly, nonatomic) double userIdentifierResetTimeInterval; // @synthesize userIdentifierResetTimeInterval=_userIdentifierResetTimeInterval;
@property(readonly, nonatomic) float dataSamplingRate; // @synthesize dataSamplingRate=_dataSamplingRate;
@property(readonly, nonatomic) NSURL *appAnalyticsEndpointUrl; // @synthesize appAnalyticsEndpointUrl=_appAnalyticsEndpointUrl;
@property(readonly, nonatomic) unsigned long long locationNumDecimalsOfPrecision; // @synthesize locationNumDecimalsOfPrecision=_locationNumDecimalsOfPrecision;
@property(readonly, nonatomic) unsigned long long networkSwitchExpirationTimeInSeconds; // @synthesize networkSwitchExpirationTimeInSeconds=_networkSwitchExpirationTimeInSeconds;
@property(readonly, nonatomic) unsigned long long networkFailedAttemptsLimit; // @synthesize networkFailedAttemptsLimit=_networkFailedAttemptsLimit;
@property(readonly, nonatomic) NSSet *aqiEnabledCountryCodes; // @synthesize aqiEnabledCountryCodes=_aqiEnabledCountryCodes;
@property(readonly, nonatomic) NSString *apiVersionFallback; // @synthesize apiVersionFallback=_apiVersionFallback;
@property(readonly, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)aqiEnabledForCountryCode:(id)arg1;
@property(readonly, nonatomic) BOOL isExpired;
@property(readonly, copy) NSString *description;
- (BOOL)shouldUseAPIVersionFromDictionary:(id)arg1 userID:(id)arg2;
- (id)getAPIVersionFromDictionary:(id)arg1 userID:(id)arg2;
- (id)getSpecificConfigFromConfigs:(id)arg1 configSpecifiers:(id)arg2 specifierKey:(id)arg3;
- (id)getEnvironmentSpecificConfigDictionaryFromDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3;
- (id)initWithConfigDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

