//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CSKStringsIndexer : NSObject
{
    unsigned long long _length;
    NSArray *_cachedObjects;
    NSMutableArray *_markers;
    unsigned long long _lastMarkerIndex;
}

+ (id)indexedObjects:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastMarkerIndex; // @synthesize lastMarkerIndex=_lastMarkerIndex;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(retain, nonatomic) NSArray *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (long long)_searchMarkerIndexForLocation:(unsigned long long)arg1;
- (void)_indexObjects:(id)arg1;
- (id)markerAtIndex:(long long)arg1;
- (id)markerForLocation:(unsigned long long)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)appendObjects:(id)arg1;

@end

