//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKServerChangeToken, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_record;
    CKServerChangeToken *_serverChangeToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end

