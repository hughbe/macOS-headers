//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFHTTPClientConnection, HMFHTTPRequest, NSError;

@protocol HMFHTTPClientConnectionDelegate <NSObject>
- (void)connection:(HMFHTTPClientConnection *)arg1 didReceiveRequest:(HMFHTTPRequest *)arg2;

@optional
- (void)connection:(HMFHTTPClientConnection *)arg1 didCloseWithError:(NSError *)arg2;
@end

