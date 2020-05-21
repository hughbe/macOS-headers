//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class CWFChannel, NSArray, NSData, NSString;

@interface NSDictionary (ScanRecord)
@property(readonly, copy, nonatomic) NSArray *domainNameList;
@property(readonly, copy, nonatomic) NSArray *operatorFriendlyNameList;
@property(readonly, copy, nonatomic) NSArray *roamingConsortiumList;
@property(readonly, copy, nonatomic) NSArray *NAIRealmNameList;
@property(readonly, copy, nonatomic) NSArray *cellularNetworkInfo;
@property(readonly, copy, nonatomic) NSDictionary *ANQPResponse;
@property(readonly, copy, nonatomic) NSString *deviceID;
@property(readonly, copy, nonatomic) NSString *bluetoothMAC;
@property(readonly, copy, nonatomic) NSString *primaryMAC;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *manufacturerName;
@property(readonly, copy, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) BOOL supportsAirPlay2;
@property(readonly, nonatomic) BOOL supportsAirPlay;
@property(readonly, nonatomic) BOOL supportsSecureWAC;
@property(readonly, nonatomic) BOOL supportsCarPlay;
@property(readonly, nonatomic) BOOL supportsWoW;
@property(readonly, nonatomic) BOOL supportsAirPrint;
@property(readonly, nonatomic) BOOL supportsHomeKit2;
@property(readonly, nonatomic) BOOL supportsHomeKit;
@property(readonly, nonatomic) BOOL supportsSoftwareCertAuth;
@property(readonly, nonatomic) BOOL supportsSoftwareTokenAuth;
@property(readonly, nonatomic) BOOL supportsMFiHardwareAuth;
@property(readonly, nonatomic) BOOL supportsMFi;
@property(readonly, nonatomic) BOOL supports5GHzNetworks;
@property(readonly, nonatomic) BOOL supports2GHzNetworks;
@property(readonly, nonatomic) BOOL supportsiAPOverWiFi;
@property(readonly, nonatomic) BOOL supportsWPS;
@property(readonly, nonatomic) BOOL providesInternetAccess;
@property(readonly, nonatomic) BOOL isUnconfiguredDevice;
@property(readonly, nonatomic) BOOL hasAppleIE;
@property(readonly, copy, nonatomic) NSString *HESSID;
@property(readonly, nonatomic) long long venueType;
@property(readonly, nonatomic) long long venueGroup;
@property(readonly, nonatomic) BOOL isUnauthenticatedEmergencyServiceAccessible;
@property(readonly, nonatomic) BOOL isEmergencyServicesReachable;
@property(readonly, nonatomic) BOOL isAdditionalStepRequiredForAccess;
@property(readonly, nonatomic) BOOL isInternetAccessible;
@property(readonly, nonatomic) int accessNetworkType;
@property(readonly, nonatomic) BOOL hasInterworkingIE;
@property(readonly, nonatomic) BOOL isMFPRequired;
@property(readonly, nonatomic) BOOL isMFPCapable;
@property(readonly, nonatomic) BOOL hasRSNIE;
@property(readonly, nonatomic) BOOL isPasspoint;
@property(readonly, nonatomic) unsigned long long cacheAge;
@property(readonly, copy, nonatomic) NSData *informationElementData;
@property(readonly, nonatomic) BOOL isAppleSWAP;
@property(readonly, nonatomic) BOOL isUnconfiguredAirPortBaseStation;
@property(readonly, nonatomic) long long airPortBaseStationModel;
@property(readonly, nonatomic) long long beaconInterval;
@property(readonly, copy, nonatomic) NSDictionary *channelInfo;
@property(readonly, copy, nonatomic) CWFChannel *channel;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) BOOL isPersonalHotspot;
@property(readonly, nonatomic) BOOL isIBSS;
@property(readonly, nonatomic) long long noise;
@property(readonly, nonatomic) long long RSSI;
@property(readonly, copy, nonatomic) NSString *BSSID;
@property(readonly, copy, nonatomic) NSData *SSID;
@property(readonly, nonatomic) int supportedPHYModes;
@property(readonly, nonatomic) unsigned long long supportedSecurityTypes;
@property(readonly, nonatomic) long long WAPISubtype;
- (id)__WAPIPolicy;
@end

