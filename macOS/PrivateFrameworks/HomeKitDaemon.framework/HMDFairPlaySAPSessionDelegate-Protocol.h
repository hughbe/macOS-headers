//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDFairPlaySAPSession, NSData, NSError;

@protocol HMDFairPlaySAPSessionDelegate <NSObject>
- (void)session:(HMDFairPlaySAPSession *)arg1 didReceiveClientExchangeData:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)session:(HMDFairPlaySAPSession *)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
- (void)session:(HMDFairPlaySAPSession *)arg1 didCloseWithError:(NSError *)arg2;
@end

