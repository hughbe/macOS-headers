//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncServices/ISyncRecordGraphNode.h>

@class ISyncRecordView, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface ISyncConcreteRecordGraphNode : ISyncRecordGraphNode
{
    ISyncRecordView *_recordView;
    NSString *_recordIdentifier;
    NSDictionary *_cachedRecord;
    NSMutableDictionary *_addedChildNodes;
    NSMutableDictionary *_modifiedChildNodes;
    NSMutableDictionary *_deletedChildNodes;
    NSSet *_displayKeys;
    NSSet *_changedKeys;
    NSSet *_identityKeys;
    NSSet *_relationshipNames;
    NSSet *_changedRelationshipNames;
    ISyncRecordGraphNode *_parentNode;
    ISyncRecordGraphNode *_topLevelParentNode;
    int _changeType;
}

- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2;
- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2 defaultOrder:(id)arg3;
- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2 defaultOrder:(id)arg3 isAdd:(BOOL)arg4;
- (BOOL)mergeChildrenTree:(id)arg1 atRelationship:(id)arg2 childChangeType:(int)arg3;
- (BOOL)mergeChangesFromNode:(id)arg1;
- (BOOL)mergeChangesFromNode:(id)arg1 childChangeType:(int)arg2;
- (id)childNodesByRecordIdentifier;
- (void)setParentNode:(id)arg1;
- (id)parentNode;
- (void)setTopLevelParentNode:(id)arg1;
- (id)topLevelParentNode;
- (id)deletedChildNodesByRelationship;
- (id)modifiedChildNodesByRelationship;
- (id)addedChildNodesByRelationship;
- (id)recordView;
- (id)recordIdentifier;
- (id)descriptionForEntireTree;
- (id)descriptionForEntireTreeTabs:(int)arg1;
- (id)description;
- (void)setChangedRelationshipNames:(id)arg1;
- (id)changedRelationshipNames;
- (void)setChangedKeys:(id)arg1;
- (id)changedKeys;
- (void)setDisplayKeys:(id)arg1;
- (id)displayKeys;
- (id)propertiesByExcludingExcludedPropertiesFromProperties:(id)arg1;
- (id)interestingAttributeKeysByComparingGraphNode:(id)arg1 interestingAttributeKeysForOther:(id *)arg2;
- (id)interestingAttributeKeysByComparingGraphNode:(id)arg1 interestingAttributeKeysForOther:(id *)arg2 includeRelationship:(BOOL)arg3;
- (id)interestingAttributeKeysByComparingGraphNode:(id)arg1 interestingAttributeKeysForOther:(id *)arg2 unInterestingAttributeKeysForOther:(id *)arg3 includeRelationship:(BOOL)arg4 forClientWithIdentifier:(id)arg5;
- (id)record;
- (id)dependenciesForPropertyName:(id)arg1;
- (id)identityKeys;
- (id)_formattedAwayProperties;
- (id)relationshipNames;
- (id)entityDisplayName;
- (id)entityName;
- (void)setChangeType:(int)arg1;
- (int)changeType;
- (void)dealloc;
- (id)initWithRecordView:(id)arg1 recordIdentifier:(id)arg2;

@end

