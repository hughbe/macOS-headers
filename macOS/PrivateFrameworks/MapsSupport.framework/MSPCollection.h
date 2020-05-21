//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPCollectionStorage.h>

#import <MapsSupport/MSPImmutableObject-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPCollectionItemReplica, NSArray, NSLock, NSString, NSUUID;

@interface MSPCollection : MSPCollectionStorage <MSPMutableObject, MSPImmutableObject>
{
    NSLock *_lock;
    NSUUID *_storageIdentifier;
    NSArray *_items;
    MSPCollectionItemReplica *_itemReplica;
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (void).cxx_destruct;
@property(retain, nonatomic) MSPCollectionItemReplica *itemReplica; // @synthesize itemReplica=_itemReplica;
- (id)storageIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFromCollection:(id)arg1 isUserVisibleChange:(out char *)arg2;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isFavoritesCollection;
- (void)setCollectionDescription:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
@property(retain, nonatomic) NSArray *itemIdentifiers;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)_noteWillMutate;
- (id)initWithData:(id)arg1 storageIdentifier:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

