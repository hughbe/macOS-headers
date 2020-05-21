//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INFilePropertyExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_qualifier;
    NSString *_type;
    INDateComponentsRange *_dateComponentsRange;
    INPerson *_person;
    NSString *_value;
    NSNumber *_quantity;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy) NSString *value; // @synthesize value=_value;
@property(readonly, copy) INPerson *person; // @synthesize person=_person;
@property(readonly, copy) INDateComponentsRange *dateComponentsRange; // @synthesize dateComponentsRange=_dateComponentsRange;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *qualifier; // @synthesize qualifier=_qualifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

