//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBModel;
@protocol HMDSettingModelBaseProtocol;

@protocol HMDSettingTransaction <NSObject>
- (void)addModel:(HMBModel *)arg1;
- (void)addSettingModel:(id <HMDSettingModelBaseProtocol>)arg1;
@end

