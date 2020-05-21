//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABDateComponentsFormatter, ABPeoplePickerSubrowGroupElement, NSDateFormatter, NSString;

@interface ABPeoplePickerSubrowObject : NSObject
{
    id _value;
    NSString *_displayValue;
    NSString *_label;
    NSString *_property;
    NSString *_propertyIdentifier;
    NSString *_recordIdentifier;
    long long _propertyType;
    BOOL _drawsSpecialSelection;
    BOOL _multiSubrow;
    long long _rows;
    NSDateFormatter *_dateFormatter;
    ABDateComponentsFormatter *_dateComponentsFormatter;
    ABAddressBook *_addressBook;
    ABPeoplePickerSubrowGroupElement *_parent;
}

@property(nonatomic) ABPeoplePickerSubrowGroupElement *parent; // @synthesize parent=_parent;
@property(nonatomic) BOOL drawsSpecialSelection; // @synthesize drawsSpecialSelection=_drawsSpecialSelection;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long propertyType; // @synthesize propertyType=_propertyType;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
@property(retain, nonatomic) NSString *propertyIdentifier; // @synthesize propertyIdentifier=_propertyIdentifier;
@property(retain, nonatomic) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (long long)compareWithSubrowObject:(id)arg1;
- (long long)rows;
- (BOOL)equalsContentsOf:(id)arg1;
- (void)_setupValueIvars;
- (id)formattedSocialProfileFromAKSocialProfile:(id)arg1;
- (id)formattedAddressFromAKPostalAddress:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dateComponentsFormatter;
- (id)dateFormatter;
- (id)initWithValue:(id)arg1 label:(id)arg2 property:(id)arg3 type:(long long)arg4;
- (long long)column;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)isEqual:(id)arg1;

@end

