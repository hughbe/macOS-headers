//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, VSOptional;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    BOOL _prohibitedByStore;
    BOOL _developer;
    BOOL _isSetTopBoxSupported;
    BOOL _isSTBOptOutAllowed;
    VSOptional *_uniqueID;
    VSOptional *_providerID;
    VSOptional *_providerInfo;
    NSString *_nameForSorting;
    NSNumber *_rankForSorting;
    NSArray *_supportedTemplates;
    NSArray *_supportedAuthenticationSchemes;
    NSURL *_authenticationURL;
    NSURL *_appStoreRoomURL;
    NSArray *_appAdamIDs;
    NSString *_defaultAppId;
    NSString *_providerArtworkTemplateURL;
    NSString *_providerAppArtworkTemplateURL;
    NSNumber *_appPlacementPosition;
    NSString *_userToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(copy, nonatomic) NSNumber *appPlacementPosition; // @synthesize appPlacementPosition=_appPlacementPosition;
@property(copy, nonatomic) NSString *providerAppArtworkTemplateURL; // @synthesize providerAppArtworkTemplateURL=_providerAppArtworkTemplateURL;
@property(nonatomic) BOOL isSTBOptOutAllowed; // @synthesize isSTBOptOutAllowed=_isSTBOptOutAllowed;
@property(nonatomic) BOOL isSetTopBoxSupported; // @synthesize isSetTopBoxSupported=_isSetTopBoxSupported;
@property(copy, nonatomic) NSString *providerArtworkTemplateURL; // @synthesize providerArtworkTemplateURL=_providerArtworkTemplateURL;
@property(copy, nonatomic) NSString *defaultAppId; // @synthesize defaultAppId=_defaultAppId;
@property(copy, nonatomic) NSArray *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
@property(copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
@property(copy, nonatomic) NSURL *authenticationURL; // @synthesize authenticationURL=_authenticationURL;
@property(nonatomic, getter=isDeveloper) BOOL developer; // @synthesize developer=_developer;
@property(nonatomic, getter=isProhibitedByStore) BOOL prohibitedByStore; // @synthesize prohibitedByStore=_prohibitedByStore;
@property(copy, nonatomic) NSArray *supportedAuthenticationSchemes; // @synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes;
@property(copy, nonatomic) NSArray *supportedTemplates; // @synthesize supportedTemplates=_supportedTemplates;
@property(copy, nonatomic) NSNumber *rankForSorting; // @synthesize rankForSorting=_rankForSorting;
@property(copy, nonatomic) NSString *nameForSorting; // @synthesize nameForSorting=_nameForSorting;
@property(retain, nonatomic) VSOptional *providerInfo; // @synthesize providerInfo=_providerInfo;
@property(retain, nonatomic) VSOptional *providerID; // @synthesize providerID=_providerID;
@property(retain, nonatomic) VSOptional *uniqueID; // @synthesize uniqueID=_uniqueID;
- (BOOL)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1;
- (BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;
@property(readonly, nonatomic) BOOL supportsTemplatesSufficientForCurrentPlatform;
@property(readonly, nonatomic) BOOL supportsTemplatesSufficientForSomeKnownPlatform;
@property(readonly, nonatomic) VSOptional *displayName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

