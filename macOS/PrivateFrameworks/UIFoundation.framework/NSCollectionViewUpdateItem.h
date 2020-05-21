//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@class NSIndexPath, NSUUID;

@interface NSCollectionViewUpdateItem : NSObject <NSCopying>
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    id _gap;
    id _reserved[11];
    BOOL _isAppendingSectionInsert;
    NSUUID *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isAppendingSectionInsert; // @synthesize isAppendingSectionInsert=_isAppendingSectionInsert;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (id)revertedUpdate;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
@property(readonly, nonatomic, getter=_isSectionOperation) BOOL isSectionOperation;
@property(readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property(readonly, nonatomic, getter=_action) long long action;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end

