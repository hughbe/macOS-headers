//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotRegistry
- (void)addSlotWithEndpoint:(NSXPCListenerEndpoint *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 reply:(void (^)(NSString *))arg4;
@end

