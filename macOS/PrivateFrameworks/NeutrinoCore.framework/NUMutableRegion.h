//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURegion.h>

@interface NUMutableRegion : NURegion
{
}

- (void)applyAffineTransform:(struct CGAffineTransform)arg1 roundPolicy:(long long)arg2;
- (void)applyOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (void)shrinkBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (void)shrinkBy:(CDStruct_912cb5d2)arg1;
- (void)growBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (void)growBy:(CDStruct_912cb5d2)arg1;
- (void)setRegion:(id)arg1;
- (void)clear;
- (void)scaleBy:(struct CGPoint)arg1 withRounding:(long long)arg2;
- (void)translateBy:(CDStruct_912cb5d2)arg1;
- (void)flipInRect:(CDStruct_996ac03c)arg1;
- (void)diffWithRegion:(id)arg1;
- (void)diffWithRect:(CDStruct_996ac03c)arg1;
- (void)clipToRegion:(id)arg1;
- (void)clipToRect:(CDStruct_996ac03c)arg1;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)removeRect:(CDStruct_996ac03c)arg1;
- (void)addRect:(CDStruct_996ac03c)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

