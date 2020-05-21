//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSFilePromiseProvider, NSOperationQueue, NSString, NSURL;

@protocol NSFilePromiseProviderDelegate <NSObject>
- (void)filePromiseProvider:(NSFilePromiseProvider *)arg1 writePromiseToURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSString *)filePromiseProvider:(NSFilePromiseProvider *)arg1 fileNameForType:(NSString *)arg2;

@optional
- (NSOperationQueue *)operationQueueForFilePromiseProvider:(NSFilePromiseProvider *)arg1;
@end

