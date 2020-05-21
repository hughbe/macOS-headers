//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeMachine/AdoptingParentStructure-Protocol.h>
#import <TimeMachine/TMStructureProtocol-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, NSURL;
@protocol TMStructureProtocol;

@interface TMStructure : NSObject <TMStructureProtocol, AdoptingParentStructure>
{
    BOOL _needsRefreshFromDisk;
    id <TMStructureProtocol> _parent;
    NSString *_uuid;
    NSURL *_url;
    NSMutableOrderedSet *_mutableChildren;
}

+ (BOOL)pathComponentResemblesStructure:(id)arg1;
+ (void)enumerateUnderURL:(id)arg1 parent:(id)arg2 enumerator:(CDUnknownBlockType)arg3;
+ (id)makeAvailableAtURL:(id)arg1;
+ (id)readAtURL:(id)arg1 parent:(id)arg2 error:(id *)arg3;
+ (id)builtUnderURL:(id)arg1 parent:(id)arg2 error:(id *)arg3;
+ (id)URLForBuildUnderURL:(id)arg1 error:(id *)arg2;
+ (id)upgradeStructureAtURL:(id)arg1 oldState:(id)arg2 error:(id *)arg3;
+ (id)annotatedStateAtURL:(id)arg1;
+ (long long)stateAtURL:(id)arg1;
+ (BOOL)getMetadataAtURL:(id)arg1 metadata:(out id *)arg2 error:(out id *)arg3;
+ (BOOL)setMetadata:(id)arg1 atURL:(id)arg2 error:(out id *)arg3;
+ (void)_preorderEnumerateStructureTree:(id)arg1 depth:(unsigned long long)arg2 enumerator:(CDUnknownBlockType)arg3;
+ (void)preorderEnumerateStructureTree:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
+ (id)structureType;
+ (id)structurePathComponentPattern;
+ (unsigned long long)version;
+ (id)backupStoreRootForVolumeURL:(id)arg1 error:(id *)arg2;
+ (id)foundStructureAtURL:(id)arg1 error:(id *)arg2;
+ (id)_coreStructureClasses;
+ (id)closestAncestorStructureOfURL:(id)arg1;
+ (id)closestAncestorStructureTypeToURL:(id)arg1 isStructureRoot:(out char *)arg2;
+ (id)structureTypeAtURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSMutableOrderedSet *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property BOOL needsRefreshFromDisk; // @synthesize needsRefreshFromDisk=_needsRefreshFromDisk;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly, retain) NSString *uuid; // @synthesize uuid=_uuid;
@property __weak id <TMStructureProtocol> parent; // @synthesize parent=_parent;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)addChild:(id)arg1;
- (id)childrenOfType:(id)arg1;
@property(readonly) NSArray *children;
- (id)treeDescription;
- (long long)refreshFromDisk;
- (BOOL)reuseAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id *)arg3;
- (void)removeChildren;
- (void)removeChild:(id)arg1;
- (id)deleteFromDiskWithCancelBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)URLForChangedParentURL:(id)arg1;
- (void)_parentChangedURL;
- (void)_updateURL:(id)arg1;
- (BOOL)rename:(id)arg1 error:(id *)arg2;
- (id)URLForAdoptionOfChild:(id)arg1 error:(id *)arg2;
- (BOOL)adoptChildStructure:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *structureType;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 url:(id)arg2;
- (BOOL)prepareForReuse:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

