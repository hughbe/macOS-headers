//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSharingAddressBookNameExtractor : NSObject
{
    NSString *_storageString;
}

+ (id)formattedAddressesForPerson:(id)arg1 useSimpleDescriptionForPrimaryAddress:(BOOL)arg2;
+ (id)formattedPhoneNumbersForPerson:(id)arg1;
+ (id)formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(BOOL)arg3;
+ (id)partialSurnames;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)nameExtensions;
+ (id)extractorWithString:(id)arg1;
- (void).cxx_destruct;
- (id)matchingPersonsWithEmailAddressOrPhoneNumbers;
- (id)matchingPersonsWithEmailAddress;
- (id)matchingPersons;
- (id)bestMatchingPerson;
- (id)_matchingPersonsBestMatchOnly:(BOOL)arg1;
- (id)addressDomain;
- (id)searchStringComponents;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (id)addressList;
- (void)firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (BOOL)firstNameShouldBeFirst;
- (id)addressComment;
- (id)uncommentedAddressRespectingGroups;
- (id)uncommentedAddress;
- (BOOL)appearsToBeAnInitial;

@end

