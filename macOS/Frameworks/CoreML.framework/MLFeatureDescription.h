//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _optional;
    NSString *_name;
    long long _type;
    NSDictionary *_valueConstraints;
    MLMultiArrayConstraint *_multiArrayConstraintCached;
    MLImageConstraint *_imageConstraintCached;
    MLDictionaryConstraint *_dictionaryConstraintCached;
    MLSequenceConstraint *_sequenceConstraintCached;
}

+ (BOOL)supportsSecureCoding;
+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 constraints:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached; // @synthesize sequenceConstraintCached=_sequenceConstraintCached;
@property(readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached; // @synthesize dictionaryConstraintCached=_dictionaryConstraintCached;
@property(readonly, nonatomic) MLImageConstraint *imageConstraintCached; // @synthesize imageConstraintCached=_imageConstraintCached;
@property(readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached; // @synthesize multiArrayConstraintCached=_multiArrayConstraintCached;
@property(retain) NSDictionary *valueConstraints; // @synthesize valueConstraints=_valueConstraints;
@property(readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)allowsValuesWithDescription:(id)arg1;
- (id)sequenceConstraint;
- (id)dictionaryConstraint;
- (id)imageConstraint;
- (id)multiArrayConstraint;
- (BOOL)isAllowedValue:(id)arg1 error:(id *)arg2;
- (BOOL)isAllowedValue:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 contraints:(id)arg4;
- (id)debugQuickLookObject;

@end

