//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy
{
    NSSet *_mergedPolicies;
}

- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)_localizedStringForKey:(id)arg1 value:(void *)arg2;
- (void)addPolicy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

