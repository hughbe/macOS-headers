//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath
{
    float _staticFriction;
    float _kineticFriction;
    float _skinFriction;
}

@property(nonatomic) float skinFriction; // @synthesize skinFriction=_skinFriction;
@property(nonatomic) float kineticFriction; // @synthesize kineticFriction=_kineticFriction;
@property(nonatomic) float staticFriction; // @synthesize staticFriction=_staticFriction;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)arg1;

@end

