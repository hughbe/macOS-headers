//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioResourceArbitration/aura_LevelControlPriv-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface aura_LevelControlPrivImpl : NSObject <aura_LevelControlPriv>
{
    shared_ptr_a7e32b6f reactor_;
}

+ (id)controlWithReactor:(shared_ptr_a7e32b6f)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (expected_b2b3f2ff)controlForClassID:(unsigned int)arg1 scope:(const unsigned int *)arg2 element:(unsigned int)arg3;
- (vector_53af465e)controlsForScope:(const unsigned int *)arg1;
- (vector_53af465e)controls;
@property(readonly, nonatomic) optional_cd8a9b08 manufacturerName;
@property(readonly, nonatomic) optional_cd8a9b08 modelName;
@property(readonly, nonatomic) optional_cd8a9b08 name;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2 qualifier:(id)arg3;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1 qualifier:(id)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1;
- (BOOL)isPropertySettable:(const struct Address *)arg1;
- (BOOL)hasProperty:(const struct Address *)arg1;
@property(readonly, nonatomic) unsigned int stockClassID;
@property(readonly, nonatomic) unsigned int classID;
@property(readonly, nonatomic) unsigned long long objectID;
- (struct error_code)setValueObserver:(function_5dd9ccd6)arg1;
@property(readonly, nonatomic) unsigned int scope;
@property(readonly, nonatomic) unsigned int element;
@property(readonly, nonatomic) _Bool settable;
- (float)convertDecibelsToScalar:(float)arg1;
- (float)convertScalarToDecibels:(float)arg1;
@property(readonly, nonatomic) tuple_83a731a2 decibelRange;
- (struct error_code)setDecibelValue:(float)arg1;
- (struct error_code)setScalarValue:(float)arg1;
@property(readonly, nonatomic) float decibelValue;
@property(readonly, nonatomic) float scalarValue;
@property(readonly, nonatomic) weak_ptr_323300f7 reactor;
- (id)initWithReactor:(shared_ptr_a7e32b6f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

