//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPreferredCallProviderResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithPreferredCallProviderToConfirm:(long long)arg1;
+ (id)successWithResolvedPreferredCallProvider:(long long)arg1;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

