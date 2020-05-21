//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol ISyncSessionCallback <NSObject>
- (oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy NSString *)arg1 reason:(bycopy NSString *)arg2 userInfo:(bycopy NSDictionary *)arg3;
- (oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy NSString *)arg1 reason:(bycopy NSString *)arg2;
- (oneway void)clientWithIdCanStartPullingChanges:(bycopy NSString *)arg1;
- (oneway void)clientWithId:(bycopy NSString *)arg1 canBeginSyncingPlanWithId:(bycopy NSString *)arg2 currentGeneration:(unsigned int)arg3 syncModes:(bycopy NSArray *)arg4 entities:(bycopy NSArray *)arg5 truthPullers:(bycopy NSDictionary *)arg6;
@end

