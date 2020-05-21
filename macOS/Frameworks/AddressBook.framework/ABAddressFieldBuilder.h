//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCardViewStyleProvider, CNPostalAddress, NSArray, NSColor, NSTextField;

@interface ABAddressFieldBuilder : NSObject
{
    CNPostalAddress *_postalAddress;
    BOOL _fieldsEditable;
    NSColor *_textColor;
    NSArray *_textFieldsArrangedByLine;
    NSArray *_firstFieldsPerLine;
    NSTextField *_streetField;
    ABCardViewStyleProvider *_styleProvider;
}

+ (unsigned long long)numberOfLinesInPostalAddress:(id)arg1 isEditing:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) NSTextField *streetField; // @synthesize streetField=_streetField;
@property(copy, nonatomic) NSArray *firstFieldsPerLine; // @synthesize firstFieldsPerLine=_firstFieldsPerLine;
@property(copy, nonatomic) NSArray *textFieldsArrangedByLine; // @synthesize textFieldsArrangedByLine=_textFieldsArrangedByLine;
@property(readonly, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) BOOL fieldsEditable; // @synthesize fieldsEditable=_fieldsEditable;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)buildFields;
- (id)textFieldForAddressComponent:(id)arg1;
- (id)fieldForAddressComponent:(id)arg1 ofDictionary:(id)arg2;
- (id)addressLinesFromFormatDictionary:(id)arg1;
- (unsigned long long)tagForFormatComponent:(id)arg1;
- (id)countryCode;
@property(readonly, copy, nonatomic) NSArray *stackViewsArrangedByLine;
- (id)initWithAddress:(id)arg1 textColor:(id)arg2 fieldsEditable:(BOOL)arg3;

@end

