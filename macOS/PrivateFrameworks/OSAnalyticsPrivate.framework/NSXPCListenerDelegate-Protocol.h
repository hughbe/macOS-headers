//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalyticsPrivate/NSObject-Protocol.h>

@class NSXPCConnection, NSXPCListener;

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (BOOL)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

