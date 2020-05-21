//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INCExtensionProxy-Protocol.h>

@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy>
{
    INCExtensionConnection *_connection;
    SARemoteDevice *_remoteDevice;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SARemoteDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)confirmIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1 andDevice:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType backgroundAppHandler;

@end

