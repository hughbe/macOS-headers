//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface RMConfigurationSubscriberClient : NSObject
{
    NSObject *_connectionLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(CDUnknownBlockType)arg1;
- (id)_connection;
- (void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

