//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKMatchOperation.h>

@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation
{
    BOOL _longTimeout;
    BOOL _shouldAutoRetry;
}

@property(nonatomic) BOOL shouldAutoRetry; // @synthesize shouldAutoRetry=_shouldAutoRetry;
@property(nonatomic) BOOL longTimeout; // @synthesize longTimeout=_longTimeout;
- (BOOL)pauseFaceDetectTimer:(BOOL)arg1 error:(id *)arg2;
- (BOOL)enableAutoRetry:(BOOL)arg1 error:(id *)arg2;
- (BOOL)startNewMatchAttemptWithError:(id *)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKMatchPearlOperationDelegate> delegate; // @dynamic delegate;

@end

