//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class NSArray, NSDictionary, NSEnumerator, NSIndexSet;
@protocol NSFastEnumeration;

@interface PXStackedDataSection : PXDataSection
{
    NSArray *_childDataSectionsStartIndexes;
    NSIndexSet *_nonEmptyChildDataSectionsStartIndexSet;
    NSDictionary *_nonEmptyChildDataSectionsIndexMap;
    NSEnumerator *_childDataSectionsEnumerator;
    id <NSFastEnumeration> _currentEnumerator;
    unsigned long long _enumerationMutations;
    unsigned long long *_currentEnumeratorMutationsPtr;
    long long _count;
    NSArray *_childDataSections;
}

+ (id)dataSectionForAssetsInCollections:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *childDataSections; // @synthesize childDataSections=_childDataSections;
- (long long)count;
- (id)debugDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_nextEnumerator;
- (void)_resetEnumerationState:(CDStruct_70511ce9 *)arg1;
- (id)objectAtIndex:(long long)arg1;
- (long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1;
- (long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2;

@end

