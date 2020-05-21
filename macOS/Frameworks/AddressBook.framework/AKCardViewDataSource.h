//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCardViewDataSource-Protocol.h>
#import <AddressBook/ABCardViewDataSourceProvider-Protocol.h>

@class ABCardViewPersonMapper, AKCardViewImageDataSource, CNContact, CNContactStore, CNUIMeContactMonitor, CNUIUndoableCommand, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol ABCardViewDataSourceDelegate, ABCardViewMultiValue, AKCardViewDataSourceSupport;

@interface AKCardViewDataSource : NSObject <ABCardViewDataSource, ABCardViewDataSourceProvider>
{
    BOOL _hasSingleValuePropertyChanges;
    BOOL _ignoresGuardianRestrictions;
    id <ABCardViewDataSourceDelegate> _delegate;
    id <AKCardViewDataSourceSupport> _cardView;
    CNContact *_contact;
    NSMutableSet *_editedPropertyKeys;
    CNContact *_updatedContact;
    CNContactStore *_contactStore;
    CNUIMeContactMonitor *_meMonitor;
    NSArray *_meIdentifiers;
    ABCardViewPersonMapper *_personMapper;
    CNUIUndoableCommand *_updatedImageCommand;
    AKCardViewImageDataSource *_imageDataSource;
    NSDictionary *_birthdayValuesByUID;
    NSDictionary *_alternateBirthdayValuesByUID;
    NSDictionary *_maidenNamesByUID;
    NSDictionary *_notesByUID;
    NSString *_preferredForPhotoUID;
    NSString *_preferredForNameUID;
    NSMutableArray *_unlinkedContacts;
    NSString *_linkIdentifier;
    NSMutableSet *_manuallyAddedPropertyKeys;
}

+ (id)allMultiValueKeys;
+ (id)trueMultiValueKeys;
- (void).cxx_destruct;
@property(nonatomic) BOOL ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property(retain, nonatomic) NSMutableSet *manuallyAddedPropertyKeys; // @synthesize manuallyAddedPropertyKeys=_manuallyAddedPropertyKeys;
@property(retain, nonatomic) NSString *linkIdentifier; // @synthesize linkIdentifier=_linkIdentifier;
@property(retain, nonatomic) NSMutableArray *unlinkedContacts; // @synthesize unlinkedContacts=_unlinkedContacts;
@property(nonatomic) BOOL hasSingleValuePropertyChanges; // @synthesize hasSingleValuePropertyChanges=_hasSingleValuePropertyChanges;
@property(retain, nonatomic) NSString *preferredForNameUID; // @synthesize preferredForNameUID=_preferredForNameUID;
@property(retain, nonatomic) NSString *preferredForPhotoUID; // @synthesize preferredForPhotoUID=_preferredForPhotoUID;
@property(retain, nonatomic) NSDictionary *notesByUID; // @synthesize notesByUID=_notesByUID;
@property(retain, nonatomic) NSDictionary *maidenNamesByUID; // @synthesize maidenNamesByUID=_maidenNamesByUID;
@property(retain, nonatomic) NSDictionary *alternateBirthdayValuesByUID; // @synthesize alternateBirthdayValuesByUID=_alternateBirthdayValuesByUID;
@property(retain, nonatomic) NSDictionary *birthdayValuesByUID; // @synthesize birthdayValuesByUID=_birthdayValuesByUID;
@property(retain, nonatomic) AKCardViewImageDataSource *imageDataSource; // @synthesize imageDataSource=_imageDataSource;
@property(retain, nonatomic) CNUIUndoableCommand *updatedImageCommand; // @synthesize updatedImageCommand=_updatedImageCommand;
@property(retain, nonatomic) ABCardViewPersonMapper *personMapper; // @synthesize personMapper=_personMapper;
@property(retain, nonatomic) NSArray *meIdentifiers; // @synthesize meIdentifiers=_meIdentifiers;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *updatedContact; // @synthesize updatedContact=_updatedContact;
@property(retain, nonatomic) NSMutableSet *editedPropertyKeys; // @synthesize editedPropertyKeys=_editedPropertyKeys;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <AKCardViewDataSourceSupport> cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) __weak id <ABCardViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)identifierOfPersonPreferredForPhoto;
- (void)setPersonWithIdentifierPreferredForPhoto:(id)arg1;
- (id)makeSetImageCommandWithImage:(id)arg1 forLinkedContactWithIdentifier:(id)arg2;
- (id)makeSetImageCommandWithImage:(id)arg1;
- (void)setImage:(id)arg1 forLinkedContactWithIdentifier:(id)arg2;
- (void)setImage:(id)arg1;
- (id)updatedImage;
- (id)contactBySettingLinkIdentifier:(id)arg1 onContact:(id)arg2;
- (id)relinkContactWithIdentifier:(id)arg1;
- (void)unlinkContact:(id)arg1;
- (void)adjustUpdatedContacts:(id)arg1 forAddedIdentifiers:(id)arg2;
- (id)removeContactsInArray:(id)arg1 withIdentifiers:(id)arg2;
- (void)adjustUpdatedContacts:(id)arg1 forRemovedIdentifiers:(id)arg2;
- (void)separateRequestedLinkedPeople:(id)arg1 intoRemovedIdentifiers:(id)arg2 addedIdentifiers:(id)arg3;
@property(retain, nonatomic) id <ABCardViewMultiValue> linkedContacts;
- (id)constraintForContact:(id)arg1;
- (id)converterForKey:(id)arg1;
- (id)multiValueForKey:(id)arg1;
- (BOOL)multiValueKeyAvailable:(id)arg1;
- (BOOL)singleValueKeyAvailable:(id)arg1;
- (id)placeholderStringForNameViewKey:(id)arg1;
- (id)valuesByIdentifierFromMultiValue:(id)arg1;
- (BOOL)isUnified;
- (void)setMultiValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forNameKey:(id)arg2;
- (void)setSingleValuesByContactIdentifier:(id)arg1 onMutableContacts:(id)arg2 forKey:(id)arg3;
- (void)applySingleValuePropertyChangesToMutableContacts:(id)arg1;
- (void)applyPreferredForNameOnMutableContacts:(id)arg1;
- (void)applyPreferredForPhotoOnMutableContacts:(id)arg1;
- (void)sanitizeLabelsOnMutableContacts:(id)arg1;
- (void)applyContactDiff:(id)arg1 toMutableContacts:(id)arg2;
- (void)setContact:(id)arg1 withUpdatedKey:(id)arg2 rebuildPersonMapper:(BOOL)arg3;
- (id)writableContactsFromContacts:(id)arg1;
- (id)mutableContactsFromContacts:(id)arg1;
- (id)updatedLinkedContacts;
- (id)contacts;
@property(readonly, nonatomic) NSArray *updatedContacts;
- (id)makeUpdatedContact;
- (id)dataSource;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)displayStyle;
- (id)phoneticNameKeys;
- (id)nameKeys;
- (void)setJobTitle:(id)arg1;
- (id)jobTitle;
- (id)jobTitlePlaceholder;
- (void)setDepartmentName:(id)arg1;
- (id)departmentName;
- (id)departmentNamePlaceholder;
- (void)setPhoneticOrganizationName:(id)arg1;
- (id)phoneticOrganizationName;
- (id)phoneticOrganizationNamePlaceholder;
- (void)setOrganizationName:(id)arg1;
- (id)organizationName;
- (id)organizationNamePlaceholder;
- (id)phoneticCompleteName;
- (id)phoneticCompleteNamePlaceholder;
- (void)setPhoneticFamilyName:(id)arg1;
- (id)phoneticFamilyName;
- (id)phoneticFamilyNamePlaceholder;
- (void)setPhoneticMiddleName:(id)arg1;
- (id)phoneticMiddleName;
- (id)phoneticMiddleNamePlaceholder;
- (void)setPhoneticGivenName:(id)arg1;
- (id)phoneticGivenName;
- (id)phoneticGivenNamePlaceholder;
- (id)completeName;
- (id)completeNamePlaceholder;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)nicknamePlaceholder;
- (void)setNameSuffix:(id)arg1;
- (id)nameSuffix;
- (id)nameSuffixPlaceholder;
- (void)setFamilyName:(id)arg1;
- (id)familyName;
- (id)familyNamePlaceholder;
- (void)setMiddleName:(id)arg1;
- (id)middleName;
- (id)middleNamePlaceholder;
- (void)setGivenName:(id)arg1;
- (id)givenName;
- (id)givenNamePlaceholder;
- (void)setNamePrefix:(id)arg1;
- (id)namePrefix;
- (id)namePrefixPlaceholder;
- (BOOL)shouldUseUnifiedPlaceholderForKey:(id)arg1;
- (BOOL)shouldOfferPhoneticName;
- (BOOL)allowsPhotoEditing;
- (void)markAsViewed:(id)arg1;
- (id)uniqueIdentifiers;
- (id)URL;
- (BOOL)isDirectoryResult;
- (BOOL)isEmpty;
- (BOOL)isReadOnly;
@property(readonly, getter=isTransient) BOOL transient;
- (BOOL)isMe;
@property(retain, nonatomic) id <ABCardViewMultiValue> textAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> callAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> preferredForName;
@property(retain, nonatomic) id <ABCardViewMultiValue> postalAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> note;
@property(retain, nonatomic) id <ABCardViewMultiValue> socialProfiles;
@property(retain, nonatomic) id <ABCardViewMultiValue> instantMessageAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> previousFamilyName;
@property(retain, nonatomic) id <ABCardViewMultiValue> contactRelations;
@property(retain, nonatomic) id <ABCardViewMultiValue> urlAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> dates;
@property(retain, nonatomic) id <ABCardViewMultiValue> nonGregorianBirthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> birthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> emailAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> phoneNumbers;
- (BOOL)keyAvailable:(id)arg1;
- (void)manuallyAddPropertyKey:(id)arg1;
- (BOOL)hasKeyBeenManuallyAdded:(id)arg1;
- (id)nameViewKeys;
- (id)multiValueKeys;
@property(readonly, nonatomic) BOOL hasChanges;
- (id)contactIdentifer;
- (id)addressBookForActionExecution;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 cardView:(id)arg3 delegate:(id)arg4;
- (void)rejectLabeledValue:(id)arg1 valueKeyPath:(id)arg2;
- (void)confirmLabeledValue:(id)arg1 valueKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

