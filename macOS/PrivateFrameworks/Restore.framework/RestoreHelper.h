//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Restore/ASRMasterProtocol-Protocol.h>

@class NSConnection, NSDictionary, NSDistantObject, NSString, NSTask, NSTimer;
@protocol ASRSlaveProtocol;

@interface RestoreHelper : NSObject <ASRMasterProtocol>
{
    NSString *_serverID;
    NSConnection *_server;
    NSString *_toolPath;
    struct AuthorizationOpaqueRef *_authRef;
    NSDistantObject<ASRSlaveProtocol> *_tool;
    NSTimer *_startTimer;
    NSTask *_asrTask;
    BOOL _toolDone;
    NSConnection *_toolConnection;
    NSDictionary *_operation;
    CDUnknownFunctionPointerType _statusFn;
    CDUnknownFunctionPointerType _completionFn;
    void *_context;
}

- (int)doCommand:(id)arg1 withStatusFn:(CDUnknownFunctionPointerType)arg2 completionFn:(CDUnknownFunctionPointerType)arg3 andContext:(void *)arg4;
- (void)dealloc;
- (id)init;
- (int)updateStatus:(id)arg1;
- (oneway void)executeCompleted:(int)arg1;
- (oneway void)registerHelperTool:(id)arg1;
- (void)commTimeout:(id)arg1;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)arg1;
- (BOOL)isAuthenticated;
- (int)authenticate;
- (void)toolDied:(id)arg1;
- (void)toolConnectionDied:(id)arg1;
- (void)gotConnection:(id)arg1;
- (BOOL)registerAsServer;
- (id)findRestoreTool;
- (int)doCommand:(id)arg1 withStatusFn:(CDUnknownFunctionPointerType)arg2 andContext:(void *)arg3;

@end

