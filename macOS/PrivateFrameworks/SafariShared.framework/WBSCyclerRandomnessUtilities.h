//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSCyclerRandomnessUtilities : NSObject
{
}

+ (id)_randomStringWithCharactersFromString:(id)arg1;
+ (id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2;
+ (id)randomElementOfArray:(id)arg1;
+ (id)randomURL;
+ (id)randomString;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1;
+ (void)reseed;
+ (void)setSeed:(unsigned long long)arg1;
+ (unsigned long long)seed;
+ (void)initialize;

@end

