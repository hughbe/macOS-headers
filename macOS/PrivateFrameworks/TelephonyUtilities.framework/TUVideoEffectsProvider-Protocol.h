//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, TUVideoEffect;

@protocol TUVideoEffectsProvider <NSObject>
@property(readonly, nonatomic) NSArray *availableVideoEffects;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect;
@end

