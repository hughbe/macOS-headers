//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CUIKeyTestOrganizer : NSObject
{
    struct _renditionkeytoken originalKey[22];
    NSArray *orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    struct _renditionkeytoken testKey[22];
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}

- (struct _renditionkeytoken *)nextKey;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken *)arg1;
- (void)_bumpTestKey;
- (BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (unsigned long long)_attributeToBumpIndex;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken *)arg1;

@end

