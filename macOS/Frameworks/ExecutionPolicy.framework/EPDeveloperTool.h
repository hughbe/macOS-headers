//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@interface EPDeveloperTool : NSObject
{
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)requestDeveloperToolAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) long long authorizationStatus;
- (void)dealloc;
- (id)init;

@end

