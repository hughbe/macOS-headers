//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface _NSCollectionViewCachedSectionInfo : NSObject
{
    id _representedObject;
    long long _itemCount;
    NSPointerArray *_pointerArray;
}

@property long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)moveItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deleteItemsAtIndexes:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (unsigned long long)actualItemCount;
- (void)setObject:(id)arg1 atIndex:(long long)arg2;
- (id)objectAtIndex:(long long)arg1;
- (id)debugDescription;
- (id)init;

@end

