//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol AudioInfoHelperProtocol
- (void)validateComponent:(NSDictionary *)arg1 parameters:(NSDictionary *)arg2 reply:(void (^)(unsigned int))arg3;
- (void)getConfigurationInfo:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)clearInfoHelperCache;
@end

