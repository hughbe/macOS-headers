//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/MAPersistentStoreProtocol-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSPredicate, NSString, NSURL, NSUUID;

@interface MADatabase : NSObject <MAPersistentStoreProtocol>
{
    unsigned long long _batchCounter;
    unsigned long long _markerCounter;
    long long _options;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSMutableArray *_localLabelStrings;
    NSMutableDictionary *_localLabelsForStrings;
    NSPredicate *_predicateIdentifierTemplate;
    NSPredicate *_predicateIdentifiersTemplate;
    NSPredicate *_predicateIdentifierAndKeyTemplate;
    NSMutableDictionary *_identifiersByEntityNameToRemove;
    NSURL *_fileURL;
}

+ (void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1;
+ (BOOL)destroyAtURL:(id)arg1 error:(id *)arg2;
+ (BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)_markerFilePathForPersistentStoreFileURL:(id)arg1;
+ (void)deleteMarkerAtURL:(id)arg1;
+ (BOOL)setMarkerAtURL:(id)arg1;
+ (BOOL)hasMarker:(id)arg1;
+ (id)persistentStoreCoordinatorOptions;
+ (id)persistentStoreFileExtension;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void)_setLocalLabelStrings:(id)arg1;
- (unsigned int)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_stringForLabel:(unsigned int)arg1;
- (BOOL)migrateToURL:(id)arg1 error:(id *)arg2;
- (BOOL)_saveSynchonously:(id *)arg1;
- (void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
- (void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;
- (void)removeModelNodePropertiesForIdentifier:(long long)arg1;
- (void)removeModelNodesPropertiesForIdentifiers:(id)arg1;
- (id)_cleanupIdentifiers:(id)arg1 forEntity:(id)arg2;
- (void)removeModelEdgeForIdentifier:(unsigned long long)arg1;
- (void)removeModelEdgesForIdentifiers:(id)arg1;
- (void)removeModelNodeForIdentifier:(unsigned long long)arg1;
- (void)removeModelNodesForIdentifiers:(id)arg1;
- (void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
- (void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
- (void)_loadPropertiesForEntityName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelNodesPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_setValue:(id)arg1 onProperty:(id)arg2;
- (BOOL)_addProperty:(id)arg1 toProperties:(id)arg2;
- (id)valueForModelProperty:(id)arg1;
- (void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2;
- (void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelEdgesWithPredicate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addNode:(id)arg1 requiresTesting:(BOOL)arg2;
- (void)enumerateModelNodesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModelNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateModelNodesWithPredicate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_saveLabelStrings;
- (void)_loadLabelStrings;
@property(nonatomic) unsigned long long graphVersion;
@property(readonly, nonatomic) NSUUID *graphIdentifier;
- (id)_modelGraph;
- (void)leaveBatch;
- (void)enterBatch;
- (id)_markerFilePath;
- (void)deleteMarker;
- (void)setMarker;
@property(readonly, nonatomic) BOOL hasMarker;
- (void)invalidateMemoryCaches;
- (void)closePersistentStore;
- (void)invalidatePersistentStores;
- (void)_resetCoreDataStack;
- (void)save:(CDUnknownBlockType)arg1;
- (BOOL)hasElementIdentifiersToRemove;
- (void)_save:(CDUnknownBlockType)arg1 force:(BOOL)arg2;
- (void)_cleanupElementIdentifiers;
@property(readonly, nonatomic) BOOL doesCascadeEdgeDelete;
- (void)removePreviousPersistenceStore;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

