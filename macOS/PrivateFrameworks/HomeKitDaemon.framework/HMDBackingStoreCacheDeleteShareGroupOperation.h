//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheDeleteShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
- (id)mainReturningError;
- (id)initWithShareGroup:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

