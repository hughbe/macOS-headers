//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (PreviewDeviceInfoAppearanceAdditions)
+ (id)ic_arrayFromNonNilObject:(id)arg1;
@property(readonly, nonatomic) NSArray *ic_deviceInfosByAddingAppearances;
- (id)ic_map:(CDUnknownBlockType)arg1;
- (id)ic_compactMap:(CDUnknownBlockType)arg1;
- (id)ic_arrayByAddingObjectsFromNonNilArray:(id)arg1;
- (id)ic_arrayByAddingNonNilObject:(id)arg1;
- (id)ic_objectAfter:(id)arg1 wrap:(BOOL)arg2;
- (id)ic_objectBefore:(id)arg1 wrap:(BOOL)arg2;
- (id)ic_objectAfter:(id)arg1;
- (id)ic_objectBefore:(id)arg1;
- (BOOL)ic_indexIsValid:(long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)ic_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (id)ic_objectsOfClass:(Class)arg1;
- (id)ic_objectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)ic_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ic_objectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id ic_randomObject;
@end

