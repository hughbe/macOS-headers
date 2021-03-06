//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSExpression, NSMutableArray, NSString;

@interface NSEntityMapping : NSObject <NSSecureCoding>
{
    void *_reserved;
    void *_reserved1;
    NSDictionary *_mappingsByName;
    NSString *_name;
    unsigned long long _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    struct __entityMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _changeIsSchemaCompatible:1;
        unsigned int _reservedEntityMapping:30;
    } _entityMappingFlags;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
@property(copy) NSString *entityMigrationPolicyClassName;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain) NSExpression *sourceExpression;
@property(retain) NSArray *relationshipMappings;
@property(retain) NSArray *attributeMappings;
@property(copy) NSData *destinationEntityVersionHash;
@property(copy) NSString *destinationEntityName;
@property(copy) NSData *sourceEntityVersionHash;
@property(copy) NSString *sourceEntityName;
@property unsigned long long mappingType;
@property(copy) NSString *name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)_setChangeIsSchemaCompatible:(BOOL)arg1;
- (BOOL)_changeIsSchemaCompatible;
- (BOOL)_hasInferredMappingNeedingValidation;
- (id)_mappingsByName;
- (void)_addRelationshipMapping:(id)arg1;
- (void)_addAttributeMapping:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)isEditable;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (id)_migrationPolicy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

