//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCNearbyKey : NSObject
{
    unsigned short _character;
    float _logLikelihood;
}

@property(readonly, nonatomic) float logLikelihood; // @synthesize logLikelihood=_logLikelihood;
@property(readonly, nonatomic) unsigned short character; // @synthesize character=_character;
- (id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2;

@end

