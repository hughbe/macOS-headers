//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADIndexedColor : OADColor
{
    unsigned long long mIndex;
}

+ (id)indexedColorWithIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)colorFromPalette:(id)arg1;
- (unsigned long long)index;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndex:(unsigned long long)arg1;

@end

