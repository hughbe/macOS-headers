//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection;

@protocol PKSubsystemServicePersonality <NSObject>
@property(readonly) NSXPCConnection *connection;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) NSUUID *uuid;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
@end

