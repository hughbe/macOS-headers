//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

@class NSArray;

@interface ABPostalAddressCollectionViewItem : ABCollectionViewItem
{
    NSArray *_countryMenuItems;
    unsigned long long _updateViewCallDepth;
}

+ (unsigned long long)numberOfLinesInString:(id)arg1;
- (void).cxx_destruct;
- (double)yOffsetOfEditView;
- (double)yOffsetOfValueView;
- (id)editViewFocusView;
- (id)nonEditViewFocusView;
- (id)_labelMenuItems;
- (id)storedPostalAddressComponentCorrespondingToAddressSubfield:(id)arg1;
- (BOOL)didLineCountChangeBetweenStoredPostalAddressAndAddressSubfied:(id)arg1;
- (void)addressSubfieldTextDidChange:(id)arg1;
- (void)datumView:(id)arg1 textDidChange:(id)arg2;
- (void)addressFormatChanged:(id)arg1;
- (void)mapsButtonPressed:(id)arg1;
- (void)_updateViewValue;
- (id)editPostalAddressRowView;
- (id)postalAddressRowView;
- (id)postalAddress;
- (id)init;

@end

