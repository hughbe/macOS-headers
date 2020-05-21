//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface INParameter : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_indexesForSubKeyPaths;
    Class _parameterClass;
    NSString *_parameterKeyPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)parameterForClass:(Class)arg1 keyPath:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *parameterKeyPath; // @synthesize parameterKeyPath=_parameterKeyPath;
@property(retain, nonatomic) Class parameterClass; // @synthesize parameterClass=_parameterClass;
@property(retain, nonatomic) NSMutableDictionary *_indexesForSubKeyPaths; // @synthesize _indexesForSubKeyPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)parameterizedObject;
- (id)parameterValue;
- (id)_parameterValueForParameterizedObject:(id)arg1;
- (void)_setIndexesForKeyPathWithSubscripts:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_subscriptedKeyPath;
- (id)_sanitizedKeyPathForKeyPath:(id)arg1 removingSubscripts:(BOOL)arg2;
- (id)_valueOfObject:(id)arg1 forRemainingKeyPath:(id)arg2 inFullyQualifiedKeyPath:(id)arg3;
- (unsigned long long)indexForSubKeyPath:(id)arg1;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(id)arg2;
- (BOOL)isEqualToParameter:(id)arg1;

@end

