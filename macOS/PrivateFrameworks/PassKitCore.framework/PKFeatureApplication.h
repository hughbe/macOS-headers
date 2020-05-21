//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL, PKFeatureApplicationDeclineDetails, PKFeatureApplicationOfferDetails;

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _applicationStateDirty;
    NSString *_applicationIdentifier;
    NSURL *_applicationBaseURL;
    unsigned long long _feature;
    unsigned long long _applicationState;
    unsigned long long _applicationStateReason;
    PKFeatureApplicationOfferDetails *_applicationOfferDetails;
    PKFeatureApplicationDeclineDetails *_declineDetails;
    NSString *_applicationTermsIdentifier;
    NSDate *_lastUpdated;
    NSString *_businessChatIdentifier;
    NSString *_coreIDVServiceProviderName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coreIDVServiceProviderName; // @synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName;
@property(copy, nonatomic) NSString *businessChatIdentifier; // @synthesize businessChatIdentifier=_businessChatIdentifier;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) BOOL applicationStateDirty; // @synthesize applicationStateDirty=_applicationStateDirty;
@property(copy, nonatomic) NSString *applicationTermsIdentifier; // @synthesize applicationTermsIdentifier=_applicationTermsIdentifier;
@property(retain, nonatomic) PKFeatureApplicationDeclineDetails *declineDetails; // @synthesize declineDetails=_declineDetails;
@property(retain, nonatomic) PKFeatureApplicationOfferDetails *applicationOfferDetails; // @synthesize applicationOfferDetails=_applicationOfferDetails;
@property(nonatomic) unsigned long long applicationStateReason; // @synthesize applicationStateReason=_applicationStateReason;
@property(nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic) unsigned long long feature; // @synthesize feature=_feature;
@property(copy, nonatomic) NSURL *applicationBaseURL; // @synthesize applicationBaseURL=_applicationBaseURL;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasSufficientOTBForInstallmentConfiguration:(id)arg1;
@property(readonly, nonatomic) BOOL isActive;
- (id)initWithDictionary:(id)arg1;

@end

