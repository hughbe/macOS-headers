//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSecurityHelperWindowControllerRecoveryAttempter : NSObject
{
    unsigned long long __recoveryOptionIndex;
}

+ (id)securityHelperWindowControllerWithRecoveryOptionIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long _recoveryOptionIndex; // @synthesize _recoveryOptionIndex=__recoveryOptionIndex;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)_recoverWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRecoveryOptionIndex:(unsigned long long)arg1;

@end

