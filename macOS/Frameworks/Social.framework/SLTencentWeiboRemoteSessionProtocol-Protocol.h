//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, SLMicroBlogStatus;

@protocol SLTencentWeiboRemoteSessionProtocol <NSObject>
- (void)revokeAllAccessTokensForDeviceWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)revokeAccessTokenForAppWithOauthToken:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)getPermaLinkFromLastStatusUpdate:(void (^)(NSString *, NSError *))arg1;
- (void)showTencentWeiboSettingsIfNeeded:(void (^)(NSNumber *, NSError *))arg1;
- (void)sendStatus:(SLMicroBlogStatus *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)fetchProfileImageDataForScreenName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)recordsMatchingPrefixString:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchCurrentImageLimits:(void (^)(NSNumber *, NSError *))arg1;
- (void)fetchCurrentUrlLimits:(void (^)(int, int, NSError *))arg1;
- (void)setGeotagStatus:(NSNumber *)arg1;
- (void)fetchGeotagStatus:(void (^)(NSNumber *, NSError *))arg1;
- (void)setGeotagAccountSetting:(NSNumber *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (void)setActiveAccountIdentifier:(NSString *)arg1;
- (void)ensureUserRecordStore;
- (void)fetchSessionInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)checkIn:(NSDictionary *)arg1;
@end

