//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ISDSchemaParser : NSObject
{
    NSMutableDictionary *_schemas;
    NSMutableDictionary *_dataClasses;
    NSMutableDictionary *_entities;
    NSMutableSet *_undefinedObjects;
    NSDictionary *_existingEntities;
    NSDictionary *_existingDataclasses;
    BOOL _relaxSchemaParsing;
}

- (id)parseDescription:(id)arg1 bundleRef:(id)arg2 linkedOnTiger:(BOOL)arg3;
- (id)parseDescription:(id)arg1 linkedOnTiger:(BOOL)arg2;
- (void)_ensureDescriptionComponent:(id)arg1 hasNoUnknownKeysForComponentType:(int)arg2 parentEntity:(id)arg3;
- (void)_parseManagedObjectModelsInDescription:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (void)_parseFileReferencesInDescription:(id)arg1 schema:(id)arg2;
- (void)_parseEntitiesInDescription:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (void)_parseEntitiesInManagedObjectModel:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (id)_mergedManagedObjectModelsInDescription:(id)arg1 schema:(id)arg2;
- (id)_newEntityFromCoreDataEntity:(id)arg1 inManagedObjectModel:(id)arg2 schema:(id)arg3 versionInfo:(id)arg4;
- (id)_newEntityInDescription:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (void)_validateParentRelationshipInEntityComponent:(id)arg1 parentName:(id)arg2;
- (void)_parseIdentityKeysInDescription:(id)arg1 component:(id)arg2;
- (void)_parseDependenciesInCoreDataEntity:(id)arg1 component:(id)arg2 userInfo:(id)arg3 schema:(id)arg4;
- (void)_parseDependenciesInDescription:(id)arg1 component:(id)arg2;
- (void)_parseInverseRelationshipsInManagedObjectModel:(id)arg1 schema:(id)arg2;
- (void)_parseInverseRelationshipsInCoreDataRelationship:(id)arg1 forEntity:(id)arg2;
- (void)_parseInverseRelationshipsInDescription:(id)arg1 schema:(id)arg2;
- (void)_parseInverseRelationshipsInRelationshipDescription:(id)arg1 forRelationship:(id)arg2 entity:(id)arg3;
- (id)_findInverseRelationshipForDefinition:(id)arg1 entity:(id)arg2;
- (void)_parseRelationshipsInCoreDataEntity:(id)arg1 component:(id)arg2 userInfo:(id)arg3 schema:(id)arg4;
- (void)_addEntitiesForCoreDataEntityAndChildren:(id)arg1 toArray:(id)arg2 schema:(id)arg3;
- (void)_parseRelationshipsInDescription:(id)arg1 component:(id)arg2 schema:(id)arg3;
- (id)_newRelationshipInDescription:(id)arg1 component:(id)arg2 schema:(id)arg3;
- (BOOL)_relationshipIsMatchableInDescription:(id)arg1 withComponent:(id)arg2;
- (BOOL)_relationshipIsToManyInDescription:(id)arg1 withComponent:(id)arg2;
- (int)_relationshipOrderingInDescription:(id)arg1 withComponent:(id)arg2;
- (int)_relationshipDeleteRuleInDescription:(id)arg1 withComponent:(id)arg2;
- (id)_relationshipTargetsInDescription:(id)arg1 withComponent:(id)arg2;
- (void)_parseAttributesInCoreDataEntity:(id)arg1 component:(id)arg2 userInfo:(id)arg3 schema:(id)arg4;
- (void)_parseAttributesInDescription:(id)arg1 component:(id)arg2 schema:(id)arg3;
- (BOOL)_propertyIsRequiredInDescription:(id)arg1 propertyName:(id)arg2 withEntityComponent:(id)arg3;
- (id)_validatePreferredClientTypes:(id)arg1;
- (id)_validateType:(id)arg1 subtype:(id)arg2 enumValues:(id)arg3;
- (id)_validateTypeSimply:(id)arg1;
- (void)_parseDataClassesInManagedObjectModel:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (void)_parseDataClassesInDescription:(id)arg1 schema:(id)arg2 versionInfo:(id)arg3;
- (id)_identityPropertyNamesSetFromCoreDataEntity:(id)arg1;
- (id)_newUserInfoForCoreDataEntity:(id)arg1 schema:(id)arg2;
- (int)_syncDeleteRuleFromCoreDataDeleteRule:(unsigned long long)arg1;
- (id)_syncAttributeTypeFromCoreDataAttributeType:(unsigned long long)arg1;
- (BOOL)_isCoreDataPropertySyncable:(id)arg1 inSchema:(id)arg2;
- (BOOL)_isCoreDataEntitySyncable:(id)arg1 inSchema:(id)arg2;
- (id)_fullyQualifiedNameForManagedObjectEntity:(id)arg1 inSchema:(id)arg2;
- (id)_dataClassNameForManagedObjectEntity:(id)arg1 inSchema:(id)arg2;
- (id)undefinedObjects;
- (id)entities;
- (id)dataClasses;
- (id)schemas;
- (BOOL)_setVersionInformation:(id)arg1 forObject:(id)arg2 isExtension:(BOOL)arg3;
- (id)_findVersionEntryForSchema:(id)arg1 inVersionInfo:(id)arg2;
- (void)_setHasDefinition:(BOOL)arg1 forObject:(id)arg2;
- (id)_schemaWithName:(id)arg1 create:(BOOL)arg2 bundleRef:(id)arg3;
- (id)_relationshipWithName:(id)arg1 forEntity:(id)arg2 create:(BOOL)arg3;
- (id)_entityWithName:(id)arg1 create:(BOOL)arg2;
- (id)_dataClassWithName:(id)arg1 create:(BOOL)arg2;
- (void)dealloc;
- (id)initWithExistingEntities:(id)arg1 andDataclasses:(id)arg2;

@end

