//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSObject-Protocol.h>

@class NSInvocation, NSXPCCoder, NSXPCConnection;
@protocol NSSecureCoding;

@protocol NSXPCConnectionDelegate <NSObject>

@optional
- (void)connection:(NSXPCConnection *)arg1 handleInvocation:(NSInvocation *)arg2 isReply:(BOOL)arg3;
- (id <NSSecureCoding>)replacementObjectForXPCConnection:(NSXPCConnection *)arg1 encoder:(NSXPCCoder *)arg2 object:(id)arg3;
@end

