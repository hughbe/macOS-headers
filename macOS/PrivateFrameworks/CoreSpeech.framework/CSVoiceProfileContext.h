//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CSVoiceProfileContext : NSObject
{
    NSString *_profileId;
    NSString *_languageCode;
    NSString *_productCategory;
    NSNumber *_version;
    unsigned long long _onboardType;
    NSString *_homeId;
    NSString *_userName;
    NSString *_siriDebugProfileId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *siriDebugProfileId; // @synthesize siriDebugProfileId=_siriDebugProfileId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *homeId; // @synthesize homeId=_homeId;
@property(nonatomic) unsigned long long onboardType; // @synthesize onboardType=_onboardType;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
- (id)description;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 sharedHomeId:(id)arg5 userName:(id)arg6;

@end

