//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPointerFunctions.h>

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions
{
    struct NSSlice slice;
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(BOOL)arg2;
- (BOOL)usesWeakReadAndWriteBarriers;
- (BOOL)usesStrongWriteBarrier;
- (CDUnknownFunctionPointerType)relinquishFunction;
- (CDUnknownFunctionPointerType)acquireFunction;
- (CDUnknownFunctionPointerType)descriptionFunction;
- (CDUnknownFunctionPointerType)isEqualFunction;
- (CDUnknownFunctionPointerType)hashFunction;
- (CDUnknownFunctionPointerType)sizeFunction;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1;
- (void)setUsesStrongWriteBarrier:(BOOL)arg1;
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end

