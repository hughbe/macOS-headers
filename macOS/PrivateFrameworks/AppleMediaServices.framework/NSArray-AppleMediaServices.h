//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (AppleMediaServices)
+ (void)ams_enumerateObjectsForArrays:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)ams_objectAtIndex:(long long)arg1;
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;
- (id)ams_mapWithTransformIgnoresNil:(CDUnknownBlockType)arg1;
- (id)ams_invertedDictionaryUsingTransformIgnoresNil:(CDUnknownBlockType)arg1;
- (id)ams_invertedDictionaryUsingTransform:(CDUnknownBlockType)arg1;
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;
- (id)ams_dictionaryUsingTransform:(CDUnknownBlockType)arg1;
- (BOOL)ams_anyWithTest:(CDUnknownBlockType)arg1;
- (BOOL)ams_allWithTest:(CDUnknownBlockType)arg1;
@end

