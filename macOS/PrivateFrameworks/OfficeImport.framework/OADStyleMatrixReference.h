//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setMatrixIndex:(unsigned long long)arg1;
- (unsigned long long)matrixIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

@end

