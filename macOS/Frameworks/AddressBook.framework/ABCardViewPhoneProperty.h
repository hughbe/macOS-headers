//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABCardViewProperty.h>

@class ABRTTServices;

@interface ABCardViewPhoneProperty : ABCardViewProperty
{
    ABRTTServices *_ttyServices;
}

- (void).cxx_destruct;
- (id)emptyValueForMultiValue:(id)arg1 label:(id)arg2;
- (BOOL)isValueEmpty:(id)arg1;
- (id)actionForGlyphName:(id)arg1;
- (id)actionGlyphNames;
- (id)initWithValueKey:(id)arg1 TTYServices:(id)arg2;

@end

