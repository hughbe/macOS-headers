//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardPerson-Protocol.h>

@class NSArray, NSData, NSDateComponents, NSDictionary, NSString;

@interface CNVCardPerson : NSObject <CNVCardPerson>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_title;
    NSString *_suffix;
    NSString *_nickname;
    NSString *_maidenName;
    NSString *_phoneticFirstName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticLastName;
    NSString *_pronunciationFirstName;
    NSString *_pronunciationLastName;
    NSString *_organization;
    NSString *_phoneticOrganization;
    NSString *_department;
    NSString *_jobTitle;
    BOOL _isMe;
    BOOL _isCompany;
    int _nameOrder;
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSArray *_postalAddresses;
    NSArray *_socialProfiles;
    NSArray *_instantMessagingAddresses;
    NSArray *_urls;
    NSArray *_calendarURIs;
    NSDictionary *_activityAlerts;
    NSArray *_imageReferences;
    NSDictionary *_imageCropRects;
    NSDictionary *_largeImageCropRects;
    NSData *_largeImageData;
    NSData *_imageData;
    NSDateComponents *_birthdayComponents;
    NSDateComponents *_alternateBirthdayComponents;
    NSArray *_otherDateComponents;
    NSArray *_relatedNames;
    NSString *_note;
    NSArray *_namesOfParentGroups;
    NSString *_cardDAVUID;
    NSString *_uid;
    NSString *_phonemeData;
    int _downtimeWhitelistAuthorization;
    NSArray *_unknownProperties;
    NSString *_preferredLikenessSource;
    NSString *_preferredApplePersonaIdentifier;
}

- (void).cxx_destruct;
@property int downtimeWhitelistAuthorization; // @synthesize downtimeWhitelistAuthorization=_downtimeWhitelistAuthorization;
@property(retain) NSArray *unknownProperties; // @synthesize unknownProperties=_unknownProperties;
@property(retain) NSString *preferredApplePersonaIdentifier; // @synthesize preferredApplePersonaIdentifier=_preferredApplePersonaIdentifier;
@property(retain) NSString *preferredLikenessSource; // @synthesize preferredLikenessSource=_preferredLikenessSource;
@property(retain) NSString *phonemeData; // @synthesize phonemeData=_phonemeData;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSString *cardDAVUID; // @synthesize cardDAVUID=_cardDAVUID;
@property(retain) NSArray *namesOfParentGroups; // @synthesize namesOfParentGroups=_namesOfParentGroups;
@property(retain) NSString *note; // @synthesize note=_note;
@property(retain) NSArray *relatedNames; // @synthesize relatedNames=_relatedNames;
@property(retain) NSArray *otherDateComponents; // @synthesize otherDateComponents=_otherDateComponents;
@property(retain) NSDateComponents *alternateBirthdayComponents; // @synthesize alternateBirthdayComponents=_alternateBirthdayComponents;
@property(retain) NSDateComponents *birthdayComponents; // @synthesize birthdayComponents=_birthdayComponents;
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain) NSData *largeImageData; // @synthesize largeImageData=_largeImageData;
@property(retain) NSDictionary *largeImageCropRects; // @synthesize largeImageCropRects=_largeImageCropRects;
@property(retain) NSDictionary *imageCropRects; // @synthesize imageCropRects=_imageCropRects;
@property(retain) NSArray *imageReferences; // @synthesize imageReferences=_imageReferences;
@property(retain) NSDictionary *activityAlerts; // @synthesize activityAlerts=_activityAlerts;
@property(retain) NSArray *calendarURIs; // @synthesize calendarURIs=_calendarURIs;
@property(retain) NSArray *urls; // @synthesize urls=_urls;
@property(retain) NSArray *instantMessagingAddresses; // @synthesize instantMessagingAddresses=_instantMessagingAddresses;
@property(retain) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property int nameOrder; // @synthesize nameOrder=_nameOrder;
@property BOOL isCompany; // @synthesize isCompany=_isCompany;
@property BOOL isMe; // @synthesize isMe=_isMe;
@property(retain) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain) NSString *department; // @synthesize department=_department;
@property(retain) NSString *phoneticOrganization; // @synthesize phoneticOrganization=_phoneticOrganization;
@property(retain) NSString *organization; // @synthesize organization=_organization;
@property(retain) NSString *pronunciationLastName; // @synthesize pronunciationLastName=_pronunciationLastName;
@property(retain) NSString *pronunciationFirstName; // @synthesize pronunciationFirstName=_pronunciationFirstName;
@property(retain) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(retain) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(retain) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(retain) NSString *maidenName; // @synthesize maidenName=_maidenName;
@property(retain) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
- (id)largeImageHashOfType:(id)arg1;
@property(readonly) NSString *companyName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

