//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/NSObject-Protocol.h>

@class ACAccount, NSDate, NSNumber, NSString, NSURLRequest;

@protocol ACDOAuthSignerProtocol <NSObject>
- (void)setClientBundleID:(NSString *)arg1 withHandler:(void (^)(BOOL, NSError *))arg2;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 applicationID:(NSString *)arg3 timestamp:(NSDate *)arg4 handler:(void (^)(NSURLRequest *, NSError *))arg5;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 callingPID:(NSNumber *)arg3 timestamp:(NSDate *)arg4 handler:(void (^)(NSURLRequest *, NSError *))arg5;
- (void)setShouldIncludeAppIdInRequest:(BOOL)arg1;
@end

