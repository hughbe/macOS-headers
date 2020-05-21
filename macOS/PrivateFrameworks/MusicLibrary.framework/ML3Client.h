//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface ML3Client : NSObject
{
    int _processID;
    NSXPCConnection *_connection;
    NSString *_bundleID;
}

+ (id)processClient;
+ (id)daemonClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic, getter=isDaemonClient) BOOL daemonClient;
- (id)description;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

