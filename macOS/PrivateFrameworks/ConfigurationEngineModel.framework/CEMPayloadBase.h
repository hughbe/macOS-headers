//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConfigurationEngineModel/NSCopying-Protocol.h>
#import <ConfigurationEngineModel/NSSecureCoding-Protocol.h>

@class NSSet;

@interface CEMPayloadBase : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_unknownPayloadKeys;
}

+ (BOOL)supportsSecureCoding;
+ (id)load:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *unknownPayloadKeys; // @synthesize unknownPayloadKeys=_unknownPayloadKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 assetProvider:(id)arg4 transformType:(id)arg5 isRequired:(BOOL)arg6 defaultValue:(id)arg7;
- (void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6;
- (void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(CDUnknownBlockType)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6;
- (void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5;
- (void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 isDefaultValue:(_Bool)arg5;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (id)serializePayload;
- (id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 nested:(BOOL)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id *)arg7;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 validator:(CDUnknownBlockType)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)createNestedObjectWithClass:(Class)arg1 withParentKey:(id)arg2 withPayload:(id)arg3 error:(id *)arg4;
- (void)mergeUnknownKeysFrom:(id)arg1 withParentKey:(id)arg2;

@end

