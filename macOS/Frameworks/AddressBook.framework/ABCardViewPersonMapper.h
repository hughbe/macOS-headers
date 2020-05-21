//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, CNMultiDictionary, NSDictionary;

@interface ABCardViewPersonMapper : NSObject
{
    CNContact *_contact;
    CNContactStore *_contactStore;
    CNMultiDictionary *_linkedIdentifierMap;
    NSDictionary *_containerByContactIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNMultiDictionary *linkedIdentifierMap; // @synthesize linkedIdentifierMap=_linkedIdentifierMap;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSDictionary *containerByContactIdentifier; // @synthesize containerByContactIdentifier=_containerByContactIdentifier;
- (id)containerForContactWithIdentifier:(id)arg1;
- (BOOL)isDirectoryContainerForContactWithIdentifier:(id)arg1;
- (BOOL)isExchangeContainerForContactWithIdentifier:(id)arg1;
- (BOOL)canCreateCustomLabelsInContainerOfContactWithIdentifier:(id)arg1;
- (BOOL)canCreateContactsInContainerOfContactWithIdentifier:(id)arg1;
- (id)nameOfContainerForContactWithIdentifier:(id)arg1;
- (BOOL)isUnified;
- (id)contactIdentifiers;
- (id)searchForContactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2;
- (id)identifiersOfContactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2;
- (id)identifiersOfValuesUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2;
- (id)contacts;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;

@end

