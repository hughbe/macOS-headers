//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NSError, NSString;

@protocol NEExtensionProviderHostProtocol <NSObject>
- (void)displayMessage:(NSString *)arg1 message:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)startedWithError:(NSError *)arg1;
@end

