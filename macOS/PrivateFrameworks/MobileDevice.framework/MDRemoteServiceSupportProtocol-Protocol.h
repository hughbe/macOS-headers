//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol MDRemoteServiceSupportProtocol
- (void)retreivePropertiesForUUID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)retrieveProperty:(char *)arg1 forUUID:(NSString *)arg2 withReply:(void (^)(NSObject *))arg3;
@end

