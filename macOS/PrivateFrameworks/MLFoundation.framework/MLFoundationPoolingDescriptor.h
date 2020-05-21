//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MLFoundation/NSCopying-Protocol.h>

@interface MLFoundationPoolingDescriptor : NSObject <NSCopying>
{
    int _poolingType;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
    unsigned long long _paddingSize;
}

+ (id)poolingDescriptorWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 paddingSize:(unsigned long long)arg8;
+ (id)poolingDescriptorWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 paddingSize:(unsigned long long)arg6;
+ (id)poolingDescriptorWithType:(int)arg1 kernelSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;
+ (id)new;
@property(readonly, nonatomic) unsigned long long paddingSize; // @synthesize paddingSize=_paddingSize;
@property(readonly, nonatomic) unsigned long long dilationRateInY; // @synthesize dilationRateInY=_dilationRateInY;
@property(readonly, nonatomic) unsigned long long dilationRateInX; // @synthesize dilationRateInX=_dilationRateInX;
@property(readonly, nonatomic) unsigned long long strideInY; // @synthesize strideInY=_strideInY;
@property(readonly, nonatomic) unsigned long long strideInX; // @synthesize strideInX=_strideInX;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(readonly, nonatomic) int poolingType; // @synthesize poolingType=_poolingType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 paddingSize:(unsigned long long)arg8;
- (id)description;
- (id)init;

@end

