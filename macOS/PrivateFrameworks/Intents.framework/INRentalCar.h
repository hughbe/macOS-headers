//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRentalCar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_rentalCompanyName;
    NSString *_type;
    NSString *_make;
    NSString *_model;
    NSString *_rentalCarDescription;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *rentalCarDescription; // @synthesize rentalCarDescription=_rentalCarDescription;
@property(readonly, copy) NSString *model; // @synthesize model=_model;
@property(readonly, copy) NSString *make; // @synthesize make=_make;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *rentalCompanyName; // @synthesize rentalCompanyName=_rentalCompanyName;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

