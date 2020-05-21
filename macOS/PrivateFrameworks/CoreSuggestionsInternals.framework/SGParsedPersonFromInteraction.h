//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INPersonHandle, NSDate, NSPersonNameComponents, NSString;

@interface SGParsedPersonFromInteraction : NSObject
{
    INPersonHandle *_handle;
    NSString *_bundleId;
    NSString *_groupId;
    NSString *_interactionIdentifier;
    NSDate *_date;
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_email;
    NSString *_instantMessageAddress;
    NSString *_socialProfile;
    NSString *_phoneNumber;
    NSString *_contactIdentifier;
}

+ (id)intentClassWhitelist;
+ (id)parseInteraction:(id)arg1 bundleId:(id)arg2;
+ (id)_peopleFromInteraction:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *socialProfile; // @synthesize socialProfile=_socialProfile;
@property(readonly, nonatomic) NSString *instantMessageAddress; // @synthesize instantMessageAddress=_instantMessageAddress;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)pipelineEntity;
- (void)grabNameIfNeededFromContactStore:(id)arg1;
- (void)_harvestInstantMessageAddress:(id)arg1;
- (void)_harvestSocialProfile:(id)arg1;
- (void)_harvestPhoneNumber:(id)arg1;
- (void)_harvestEmail:(id)arg1;
- (void)_harvestPersonHandle:(id)arg1 suggestionType:(long long)arg2;
- (id)initWithPerson:(id)arg1 bundleId:(id)arg2 interactionIdentifier:(id)arg3 groupId:(id)arg4 date:(id)arg5;

@end

