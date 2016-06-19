//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NSATSUStyleObject : NSObject
{
    struct OpaqueATSUStyle *style;
    NSMutableArray *exclusives;
}

- (id)convertToDictionary;
- (BOOL)isTypeNotExclusive:(unsigned short)arg1;
- (void)typeIsNotExclusive:(unsigned short)arg1;
- (id)exclusives;
- (void)mergeStyleInto:(id)arg1;
- (void)mergeAttributesInto:(id)arg1;
- (void)mergeFontFeaturesInto:(id)arg1;
- (void)mergeFontVariationsInto:(id)arg1;
- (void)setAttributes:(unsigned int *)arg1 Values:(void *)arg2 ValueSizes:(unsigned long long *)arg3 Count:(unsigned long long)arg4;
- (void)merge:(struct OpaqueATSUStyle *)arg1;
- (void)mergeInVariations:(struct OpaqueATSUStyle *)arg1;
- (id)description;
- (void)addFeatureDescriptions:(id)arg1;
- (void)addVariationDescriptions:(id)arg1;
- (void)setVariations:(unsigned int *)arg1 Values:(int *)arg2 Count:(unsigned long long)arg3;
- (void)setFeatures:(unsigned short *)arg1 selectors:(unsigned short *)arg2 count:(unsigned long long)arg3;
- (struct OpaqueATSUStyle *)style;
- (void)dealloc;
- (id)initWithStyle:(struct OpaqueATSUStyle *)arg1;
- (id)init;

@end

