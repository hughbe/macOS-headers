//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

#import <ModelIO/MDLJointAnimation-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation>
{
    NSArray *_jointPaths;
    MDLAnimatedVector3Array *_translations;
    MDLAnimatedQuaternionArray *_rotations;
    MDLAnimatedVector3Array *_scales;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MDLAnimatedVector3Array *scales; // @synthesize scales=_scales;
@property(readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // @synthesize rotations=_rotations;
@property(readonly, nonatomic) MDLAnimatedVector3Array *translations; // @synthesize translations=_translations;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

