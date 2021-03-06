/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface KGMemoryGraphStore : NSObject <KGGraphStore> {
    KGEntityDescription * _entityDescription;
    NSUUID * _graphIdentifier;
    unsigned long long  _graphVersion;
    bool  _hasMarker;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _memoryEdgeByIdentifier;
    NSMutableDictionary * _memoryEdgesByLabel;
    NSMutableDictionary * _memoryNodeByIdentifier;
    NSMutableDictionary * _memoryNodesByLabel;
    unsigned long long  _nextEdgeIdentifier;
    unsigned long long  _nextNodeIdentifier;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) KGEntityDescription *entityDescription;
@property (nonatomic, readonly) NSUUID *graphIdentifier;
@property (nonatomic) unsigned long long graphVersion;
@property (nonatomic, readonly) bool hasMarker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSMutableDictionary *memoryEdgeByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *memoryEdgesByLabel;
@property (nonatomic, readonly) NSMutableDictionary *memoryNodeByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *memoryNodesByLabel;
@property (nonatomic) unsigned long long nextEdgeIdentifier;
@property (nonatomic) unsigned long long nextNodeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (bool)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)deleteMarkerForDiskRepresentationAtURL:(id)arg1;
+ (bool)destroyAtURL:(id)arg1 error:(id*)arg2;
+ (bool)hasMarkerForDiskRepresentationAtURL:(id)arg1;
+ (bool)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (id)persistentStoreFileExtension;
+ (bool)setMarkerForDiskRepresentationAtURL:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6;
- (unsigned long long)_addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4;
- (id)_edgeIdentifiersForNodeIdentifier:(unsigned long long)arg1;
- (id)_lock_arrayOfEdgesWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_lock_arrayOfNodesWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_lock_snapshotEdgeForIdentifier:(unsigned long long)arg1 reusableNode:(id)arg2;
- (id)_lock_snapshotNodeForIdentifier:(unsigned long long)arg1;
- (bool)_removeEdgesForMemoryNode:(id)arg1 error:(id*)arg2;
- (bool)_removeMemoryEdge:(id)arg1 fromSourNode:(bool)arg2 fromTargetNode:(bool)arg3 error:(id*)arg4;
- (bool)_removeNode:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6;
- (unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4;
- (id)arrayOfEdgesWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)arrayOfNodesWithIdentifiers:(id)arg1 error:(id*)arg2;
- (void)beginTransaction;
- (void)close;
- (void)commitTransaction;
- (bool)copyToURL:(id)arg1 error:(id*)arg2;
- (void)deleteMarker;
- (id)edgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (id)edgeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 error:(id*)arg3;
- (id)edgeLabels;
- (id)edgesForIdentifiers:(id)arg1 error:(id*)arg2;
- (id)entityDescription;
- (id)graphIdentifier;
- (unsigned long long)graphVersion;
- (bool)hasMarker;
- (id)init;
- (id)initForSubclasses;
- (id)insertEdgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNodeIdentifier:(unsigned long long)arg5 targetNodeIdentifier:(unsigned long long)arg6 error:(id*)arg7;
- (id)insertNodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 error:(id*)arg5;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)memoryEdgeByIdentifier;
- (id)memoryEdgesByLabel;
- (id)memoryNodeByIdentifier;
- (id)memoryNodesByLabel;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(id)arg3 error:(id*)arg4;
- (unsigned long long)nextEdgeIdentifier;
- (unsigned long long)nextNodeIdentifier;
- (id)nodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (id)nodeIdentifiersMatchingFilter:(id)arg1 intersectingIdentifiers:(id)arg2 error:(id*)arg3;
- (id)nodeLabels;
- (id)nodesForIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)openWithMode:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeEdgesForIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)removeNodeForIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeNodesForIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setGraphVersion:(unsigned long long)arg1;
- (void)setMarker;
- (void)setNextEdgeIdentifier:(unsigned long long)arg1;
- (void)setNextNodeIdentifier:(unsigned long long)arg1;
- (bool)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (bool)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3;
- (bool)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3;
- (bool)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3;
- (id)url;

@end
