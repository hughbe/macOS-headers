//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSFastEnumeration;

@interface PHCollectionListAncestryContext : NSObject
{
    id <NSFastEnumeration> _allCollectionLists;
    NSMutableDictionary *_collectionListsByOID;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *collectionListsByOID; // @synthesize collectionListsByOID=_collectionListsByOID;
@property(retain) id <NSFastEnumeration> allCollectionLists; // @synthesize allCollectionLists=_allCollectionLists;
- (id)folderForID:(id)arg1;
- (id)initWithCollectionLists:(id)arg1;

@end

