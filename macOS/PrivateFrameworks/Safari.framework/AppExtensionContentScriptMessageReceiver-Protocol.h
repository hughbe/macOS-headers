//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol AppExtensionContentScriptMessageReceiver <NSObject>
- (void)setContextMenuUserInfo:(NSDictionary *)arg1 forExtensionWithIdentifier:(NSUUID *)arg2;
- (void)dispatchMessageWithName:(NSString *)arg1 toExtensionWithIdentifier:(NSUUID *)arg2 userInfo:(NSDictionary *)arg3;
@end

