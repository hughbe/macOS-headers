//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSServiceQuality, NSString;

@protocol BSXPCServiceConnectionListenerConfiguring
- (void)setErrorHandler:(void (^)(NSError *))arg1;
- (void)setConnectionHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setEndpointDescription:(NSString *)arg1;
@end

