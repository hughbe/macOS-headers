//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSURL;

@protocol SCNSceneLoaderProtocol
- (void)loadSceneAtURL:(NSURL *)arg1 options:(NSDictionary *)arg2 withReply:(void (^)(NSData *, NSError *))arg3;
- (void)consumeExtensions:(NSArray *)arg1;
@end

