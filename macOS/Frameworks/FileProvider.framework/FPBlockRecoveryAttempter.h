//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPBlockRecoveryAttempter : NSObject
{
    CDUnknownBlockType _recoveryBlock;
    NSError *_expectedError;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSError *expectedError; // @synthesize expectedError=_expectedError;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

