//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABCN : NSObject
{
}

+ (id)abcnGroupFromABCDGroup:(id)arg1;
+ (id)abcnGroupFromABGroup:(id)arg1;
+ (id)abcnMultiValueFromABMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
+ (id)abcnContactFromABCDContact:(id)arg1;
+ (id)abcnContactFromABPerson:(id)arg1;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (id)unifyContacts:(id)arg1 withIndexOfPreferredContact:(unsigned long long)arg2;
+ (id)unifyContacts:(id)arg1;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1;
+ (void)addOrUpdateContact:(id)arg1 toSaveRequest:(id)arg2;
+ (BOOL)executeSaveRequest:(id)arg1 withDataMapper:(id)arg2 error:(id *)arg3;
+ (id)diffContact:(id)arg1 to:(id)arg2;
+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)joinNonEmptyKeys:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)joinNonEmptyKeys:(id)arg1 onContact:(id)arg2;
+ (id)phonemeDataDescription;
+ (id)texttoneDescription;
+ (id)ringtoneDescription;
+ (id)alertTonesDescription;
+ (id)postalAddressesDescription;
+ (id)socialProfilesDescription;
+ (id)relatedNamesDescription;
+ (id)instantMessagAddressesDescription;
+ (id)otherDatesDescription;
+ (id)otherDateComponentsDescription;
+ (id)urlAddressesDescription;
+ (id)emailAddressesDescription;
+ (id)phoneNumbersDescription;
+ (id)nameOrderDescription;
+ (id)displayStyleDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)preferredLikenessSourceDescription;
+ (id)preferredForPhotoDescription;
+ (id)preferredForNameDescription;
+ (id)linkIdentifierDescription;
+ (id)noteDescription;
+ (id)creationDateDescription;
+ (id)alternateBirthdayComponentsDescription;
+ (id)birthdayComponentsDescription;
+ (id)jobTitleDescription;
+ (id)departmentDescription;
+ (id)phoneticCompanyNameDescription;
+ (id)companyNameDescription;
+ (id)sortingLastNameDescription;
+ (id)sortingFirstNameDescription;
+ (id)phoneticLastNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticFirstNameDescription;
+ (id)nicknameDescription;
+ (id)maidenNameDescription;
+ (id)nameSuffixDescription;
+ (id)lastNameDescription;
+ (id)middleNameDescription;
+ (id)firstNameDescription;
+ (id)nameTitleDescription;
+ (id)identifierDescription;
+ (id)contactRelationshipKeyPathsForPrefetching;
+ (id)makeContactRelationshipKeyPathsForPrefetching;
+ (id)makeContactPropertiesByAddressBookProperty;
+ (id)contactPropertiesByAddressBookProperty;
+ (id)makeContactPropertiesByKey;
+ (id)contactPropertiesByKey;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;
+ (id)writableContactProperties;
+ (id)multiValueContactProperties;
+ (id)singleValueContactProperties;
+ (id)makeAllContactProperties;
+ (id)allContactProperties;
+ (CDUnknownBlockType)postalAddressToDictionaryTransform;
+ (CDUnknownBlockType)postalAddressFromDictionaryTransform;
+ (CDUnknownBlockType)instantMessageAddressToDictionaryTransform;
+ (CDUnknownBlockType)instantMessageAddressFromDictionaryTransform;
+ (CDUnknownBlockType)socialProfileToDictionaryTransform;
+ (CDUnknownBlockType)socialProfileFromDictionaryTransform;
+ (CDUnknownBlockType)nullTransform;
+ (id)abMultiValueFromABCNMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
+ (id)performResultBlockWithManagedObjectContext:(CDUnknownBlockType)arg1 addressBook:(id)arg2;
+ (void)performBlockAndWaitWithManagedObjectContext:(CDUnknownBlockType)arg1 addressBook:(id)arg2;
+ (id)_accountCollectionForPersistenceURL:(id)arg1;
+ (id)photoForContacts:(id)arg1 inAddressBook:(id)arg2;
+ (id)photoForContact:(id)arg1 inAddressBook:(id)arg2;
+ (BOOL)setImageData:(id)arg1 onLinkedContacts:(id)arg2 inAddressBook:(id)arg3 error:(id *)arg4;
+ (BOOL)setImageData:(id)arg1 onNonUnifiedContact:(id)arg2 inAddressBook:(id)arg3 error:(id *)arg4;
+ (BOOL)setImageData:(id)arg1 onContact:(id)arg2 inAddressBook:(id)arg3 error:(id *)arg4;
+ (void)logFetchTimesWithStopWatch:(id)arg1 resultCount:(unsigned long long)arg2;
+ (id)stopWatch;
+ (id)nts_fetchContactsWithCoreDataRequest:(id)arg1 inContext:(id)arg2 addressBook:(id)arg3 error:(id *)arg4;
+ (id)fetchContactsWithCoreDataRequest:(id)arg1 inAddressBook:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestForContacts;
+ (BOOL)isContactReadOnly:(id)arg1 inAddressBook:(id)arg2;
+ (id)accountsForContactsWithIdentifiers:(id)arg1 inAddressBook:(id)arg2;
+ (id)accountForContactWithIdentifier:(id)arg1 inAddressBook:(id)arg2;
+ (id)accountForContact:(id)arg1 inAddressBook:(id)arg2;
+ (id)fetchContactsWithLinkIdentifier:(id)arg1 inAddressBook:(id)arg2 error:(id *)arg3;
+ (id)sortContactsByName:(id)arg1;
+ (id)unifyContacts:(id)arg1 inAddressBook:(id)arg2;
+ (id)fetchContactsWithIdentifiers:(id)arg1 unify:(BOOL)arg2 inAddressBook:(id)arg3 error:(id *)arg4;
+ (id)fetchContactsWithIdentifiers:(id)arg1 inAddressBook:(id)arg2 error:(id *)arg3;
+ (id)fetchContactWithIdentifier:(id)arg1 inAddressBook:(id)arg2 error:(id *)arg3;
+ (id)fetchContactsMatchingPredicate:(id)arg1 inAddressBookViaCoreData:(id)arg2 error:(id *)arg3;
+ (id)fetchAllContactInAddressBookViaAPI:(id)arg1 error:(id *)arg2;
+ (id)fetchContactsMatchingPredicate:(id)arg1 addressBook:(id)arg2 error:(id *)arg3;

@end

