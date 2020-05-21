//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditAddition-Protocol.h>

@class NSArray, NSIndexSet, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition>
{
    NSMapTable *_identifiersAtopByIdentifier;
    NSArray *_objects;
    NSArray *_addedImmutableObjects;
    NSIndexSet *_indexesOfAddedObjects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexSet *indexesOfAddedObjects; // @synthesize indexesOfAddedObjects=_indexesOfAddedObjects;
@property(readonly, nonatomic) NSArray *addedImmutableObjects; // @synthesize addedImmutableObjects=_addedImmutableObjects;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)identifierForObjectAtopAddedImmutableObject:(id)arg1;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithObjects:(id)arg1 indexes:(id)arg2 identifiersAtop:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

