//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface NSPSMatrix : NSObject <NSCoding>
{
    double matrixElements[12];
    struct _mFlags {
        unsigned int identity:1;
        unsigned int rotated:1;
        unsigned int rotationOnly:1;
        unsigned int _RESERVED:13;
    } mFlags;
}

+ (void)initialize;
- (struct CGAffineTransform)CGAffineTransform;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_computeInv;
- (id)invTransformRect:(struct CGRect *)arg1;
- (id)transformRect:(struct CGRect *)arg1;
- (BOOL)rotated;
- (BOOL)identity;
- (id)makeIdentity;
- (id)invTransform:(struct CGPoint *)arg1;
- (id)transform:(struct CGPoint *)arg1;
- (id)sendInv;
- (id)send;
- (id)concat:(id)arg1;
- (void)setFrameRotation:(double)arg1;
- (id)translateTo:(double)arg1:(double)arg2;
- (id)scaleTo:(double)arg1:(double)arg2;
- (void)rotateByAngle:(double)arg1;
- (void)translateOriginToPoint:(struct CGPoint)arg1;
- (void)scaleUnitSquareToSize:(struct CGSize)arg1;
- (double)getRotationAngle;
- (id)_doRotationOnly;
- (id)init;

@end

