//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (NAAdditions)
+ (id)na_setWithSafeObject:(id)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_setByDiffingWithSet:(id)arg1;
- (id)na_setByRemovingObjectsFromSet:(id)arg1;
- (id)na_setByIntersectingWithSet:(id)arg1;
- (id)na_setByFlattening;
- (void)na_each:(CDUnknownBlockType)arg1;
- (BOOL)na_all:(CDUnknownBlockType)arg1;
- (BOOL)na_any:(CDUnknownBlockType)arg1;
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)na_filter:(CDUnknownBlockType)arg1;
- (id)na_flatMap:(CDUnknownBlockType)arg1;
- (id)na_map:(CDUnknownBlockType)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (BOOL)na_safeContainsObject:(id)arg1;
@end

