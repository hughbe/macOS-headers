//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUINamedRenditionInfo : NSObject
{
    void *_bitmap;
    const struct _renditionkeyfmt *_keyFormat;
}

- (void)incrementIndex:(unsigned long long *)arg1 inValues:(id)arg2 forAttribute:(int)arg3;
- (void)decrementValue:(long long *)arg1 forAttribute:(int)arg2;
- (unsigned long long)numberOfBitsSet;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (BOOL)diverseContentPresentForAttribute:(int)arg1;
- (BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;
- (BOOL)contentPresentForAttribute:(int)arg1;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedRenditionInfo:(id)arg1;
- (id)archivedData;
- (void)dealloc;
- (id)_initWithKeyFormat:(const struct _renditionkeyfmt *)arg1 andBitmap:(void **)arg2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt *)arg1;
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt *)arg2;

@end

