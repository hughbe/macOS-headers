//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject
{
    NSArray *_recoveryOptions;
    long long _preferredRecoveryOptionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long preferredRecoveryOptionIndex; // @synthesize preferredRecoveryOptionIndex=_preferredRecoveryOptionIndex;
@property(copy, nonatomic) NSArray *recoveryOptions; // @synthesize recoveryOptions=_recoveryOptions;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)init;

@end

