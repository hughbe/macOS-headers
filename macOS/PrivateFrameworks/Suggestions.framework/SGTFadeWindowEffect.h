//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/SGTAnimationWindowEffect.h>

__attribute__((visibility("hidden")))
@interface SGTFadeWindowEffect : SGTAnimationWindowEffect
{
    double _initialAlpha;
    double _finalAlpha;
}

+ (id)fadeWindow:(id)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3 duration:(double)arg4;
- (void)done;
- (void)setValue:(float)arg1;

@end

