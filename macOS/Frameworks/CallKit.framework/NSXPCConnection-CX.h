//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSSet, NSString;

@interface NSXPCConnection (CX)
- (BOOL)cx_clientSandboxCanAccessFileURL:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *cx_capabilities;
@property(readonly, copy, nonatomic) NSString *cx_processName;
@property(readonly, copy, nonatomic) NSString *cx_developerTeamIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_applicationIdentifier;
@end

