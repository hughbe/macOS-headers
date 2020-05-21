//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary, NSXMLDocument, NSXMLElement;

__attribute__((visibility("hidden")))
@interface NSXMLDocumentMap : NSPersistentStoreMap
{
    NSXMLDocument *_document;
    NSXMLElement *_oidnode;
    NSMutableDictionary *_theMap;
    NSMutableDictionary *_byEntityName;
}

+ (void)_updateDocument:(id)arg1 withMetadata:(id)arg2;
- (void)prepareForSave;
- (void)_updateDocumentMetadata;
- (void)_processMetadataNode:(id)arg1;
- (BOOL)containsObjectWithID:(id)arg1;
- (id)handleFetchRequest:(id)arg1;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (void)_deleteNode:(id)arg1 byEntityName:(id)arg2;
- (void)_insertNode:(id)arg1 byEntityName:(id)arg2;
- (unsigned long long)nextPK64;
- (id)dataForKey:(id)arg1;
- (id)document;
- (id)_theDictionary;
- (void)dealloc;
- (id)nodeFromManagedObject:(id)arg1 objectIDMap:(id)arg2;
- (void)updateXMLNode:(id)arg1 fromObject:(id)arg2 objectIDMapping:(id)arg3;
- (id)getIDRefStringForValue:(id)arg1 ofRelationship:(id)arg2 stringKeys:(id)arg3 objectIDMapping:(id)arg4 objectForError:(id)arg5;
- (id)createRelationshipChildOnNode:(id)arg1 forRelationshipDescription:(id)arg2;
- (void)createAttributeChildOnNode:(id)arg1 forAttribute:(id)arg2 type:(id)arg3 andValue:(id)arg4;
- (id)getXMLAttributeValueFromObject:(id)arg1 forAttribute:(id)arg2;
- (id)retainedXmlInfoForRelationship:(id)arg1;
- (id)xmlInfoForAttribute:(id)arg1;
- (id)initWithDocument:(id)arg1 forStore:(id)arg2;
- (BOOL)_isDocumentXMLStore:(id)arg1;
- (void)_processDocument;
- (void)_processDBInfoNode:(id)arg1;
- (void)_processInstanceNode:(id)arg1;
- (id)_createDocument;

@end

