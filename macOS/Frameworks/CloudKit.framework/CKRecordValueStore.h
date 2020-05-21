//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordKeyValueSetting-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, NSMutableDictionary, NSMutableSet, NSString;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding>
{
    BOOL _trackChanges;
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    CKRecord *_record;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(nonatomic) BOOL trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) NSMutableSet *changedKeysSet; // @synthesize changedKeysSet=_changedKeysSet;
@property(retain, nonatomic) NSMutableDictionary *originalValues; // @synthesize originalValues=_originalValues;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_validateRecordValue:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateKeyUniquenessForKey:(id)arg1;
- (BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)arg1 includingAllArrayItems:(BOOL)arg2 withValueCheckBlock:(CDUnknownBlockType)arg3;
- (BOOL)checkProperties:(BOOL)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;
- (void)resetChangedKeys;
- (id)changedKeys;
- (id)allKeys;
- (void)_sanitizeRecordValue:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)recordID;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

