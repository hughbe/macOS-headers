//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABCNPropertyDescription.h>

#import <AddressBookCore/ABCNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface ABCNPostalAddressesDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>
{
}

- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddress:(id)arg2;
- (BOOL)postalCodeIsMoreComplete:(id)arg1;
- (unsigned long long)preferenceScoreForKey:(id)arg1;
- (unsigned long long)preferenceScoreForAddress:(id)arg1;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)isPostalCodeValue:(id)arg1 equivalentToValue:(id)arg2;
- (unsigned long long)indexOfUSState:(id)arg1;
- (BOOL)isStateValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 forKey:(id)arg3;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

