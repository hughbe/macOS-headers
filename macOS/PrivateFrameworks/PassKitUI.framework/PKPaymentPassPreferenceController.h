//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceController.h>

@class NSMutableDictionary, PKPaymentPreferenceContact;

@interface PKPaymentPassPreferenceController : PKPaymentPreferenceController
{
    PKPaymentPreferenceContact *_billingPreference;
    NSMutableDictionary *_passUniqueIDToCardEntryMap;
    NSMutableDictionary *_passUniqueIDToAcceptedPaymentApplicationsMap;
    NSMutableDictionary *_passUniqueIDToUnavailablePaymentApplicationsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *passUniqueIDToUnavailablePaymentApplicationsMap; // @synthesize passUniqueIDToUnavailablePaymentApplicationsMap=_passUniqueIDToUnavailablePaymentApplicationsMap;
@property(retain, nonatomic) NSMutableDictionary *passUniqueIDToAcceptedPaymentApplicationsMap; // @synthesize passUniqueIDToAcceptedPaymentApplicationsMap=_passUniqueIDToAcceptedPaymentApplicationsMap;
@property(retain, nonatomic) NSMutableDictionary *passUniqueIDToCardEntryMap; // @synthesize passUniqueIDToCardEntryMap=_passUniqueIDToCardEntryMap;
@property(retain, nonatomic) PKPaymentPreferenceContact *billingPreference; // @synthesize billingPreference=_billingPreference;
- (BOOL)_shouldDisplayPaymentApplicationWithAcceptedApplicationsCount:(long long)arg1 unavailableApplicationsCount:(long long)arg2;
- (id)_unavailablePaymentApplicationsForPass:(id)arg1;
- (id)_acceptedPaymentApplicationsForPass:(id)arg1;
- (BOOL)canSelectPreference:(id)arg1 preferenceIndex:(unsigned long long)arg2 subItemIndex:(unsigned long long)arg3;
- (id)_unavailableReasonForPass:(id)arg1;
- (id)_cardPreferenceForUnavailablePasses;
- (id)_cardPreferenceForAcceptedPasses;
- (void)_setupPreferences;
- (id)cardEntryForPass:(id)arg1;
- (BOOL)shouldEnableSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3;
- (id)titleForSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3;
- (long long)numberOfSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2;
- (long long)numberOfMenuItemsInSection:(long long)arg1;
- (void)updatePreferences;
- (void)setModel:(id)arg1;

@end

