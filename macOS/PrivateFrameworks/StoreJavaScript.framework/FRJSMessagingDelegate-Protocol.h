//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreJavaScript/NSObject-Protocol.h>

@class NSString;
@protocol NSSecureCoding;

@protocol FRJSMessagingDelegate <NSObject>
- (id)sendSynchronousMessage:(NSString *)arg1 messageBody:(id <NSSecureCoding>)arg2;
- (void)sendMessage:(NSString *)arg1 messageBody:(id <NSSecureCoding>)arg2;
@end

