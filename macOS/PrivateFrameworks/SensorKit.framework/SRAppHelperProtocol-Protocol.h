//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString;

@protocol SRAppHelperProtocol
- (void)authorizationRequestStatusForBundleId:(NSString *)arg1 sensors:(NSSet *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)bundlesAuthorizedToUseSensorKitWithReply:(void (^)(NSSet *, NSSet *, NSError *))arg1;
- (void)resetAuthorizationsForBundlePath:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

