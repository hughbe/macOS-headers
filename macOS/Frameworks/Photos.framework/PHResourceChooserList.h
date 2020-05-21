//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableArray, NSSortDescriptor;
@protocol PHResourceChooserAsset;

@interface PHResourceChooserList : NSObject
{
    id <PHResourceChooserAsset> _asset;
    CDUnknownBlockType _itemHandler;
    CDUnknownBlockType _endOfListHandler;
    long long _hintDataCurrentOffset;
    long long _hintDataNextItemOffset;
    BOOL _finishedPresentingFromHints;
    BOOL _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_nonHintResources;
    NSArray *_unvisitedNonHintResources;
    unsigned long long _lastPresentedFullResourceIndex;
    BOOL _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    unsigned long long _enumerationDirection;
}

- (void).cxx_destruct;
- (id)init;

@end

