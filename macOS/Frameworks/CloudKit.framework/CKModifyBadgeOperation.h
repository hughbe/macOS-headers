//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation
{
    CDUnknownBlockType _modifyBadgeCompletionBlock;
    unsigned long long _badgeValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
@property(copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id)init;

@end

