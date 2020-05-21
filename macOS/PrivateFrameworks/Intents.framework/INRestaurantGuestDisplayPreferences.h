//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantGuestDisplayPreferencesExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>
{
    BOOL _nameFieldFirstNameOptional;
    BOOL _nameFieldLastNameOptional;
    BOOL _nameFieldShouldBeDisplayed;
    BOOL _emailAddressFieldShouldBeDisplayed;
    BOOL _phoneNumberFieldShouldBeDisplayed;
    BOOL _nameEditable;
    BOOL _emailAddressEditable;
    BOOL _phoneNumberEditable;
}

+ (BOOL)supportsSecureCoding;
@property BOOL phoneNumberEditable; // @synthesize phoneNumberEditable=_phoneNumberEditable;
@property BOOL emailAddressEditable; // @synthesize emailAddressEditable=_emailAddressEditable;
@property BOOL nameEditable; // @synthesize nameEditable=_nameEditable;
@property BOOL phoneNumberFieldShouldBeDisplayed; // @synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed;
@property BOOL emailAddressFieldShouldBeDisplayed; // @synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed;
@property BOOL nameFieldShouldBeDisplayed; // @synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed;
@property BOOL nameFieldLastNameOptional; // @synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional;
@property BOOL nameFieldFirstNameOptional; // @synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

