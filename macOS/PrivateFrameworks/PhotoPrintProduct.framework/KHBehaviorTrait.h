//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@interface KHBehaviorTrait : KHModel
{
    long long _behaviorId;
    long long _traitId;
}

+ (id)traitsForBehaviorId:(long long)arg1 fromDatabase:(id)arg2;
- (void)setTraitId:(long long)arg1;
- (void)cacheTraitId:(long long)arg1;
- (long long)traitId;
- (void)setBehaviorId:(long long)arg1;
- (void)cacheBehaviorId:(long long)arg1;
- (long long)behaviorId;
- (void)dealloc;

@end

