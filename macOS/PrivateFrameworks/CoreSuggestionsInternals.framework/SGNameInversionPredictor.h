//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGNameInversionPredictor : NSObject
{
    NSDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;
- (double)inversionRateForNamingTradition:(id)arg1;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (id)init;

@end

