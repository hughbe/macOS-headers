//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecureChannel/SecureChannelService-Protocol.h>

@class NSXPCConnection;
@protocol SecureChannelService;

__attribute__((visibility("hidden")))
@interface SecureChannelServiceProxy : NSObject <SecureChannelService>
{
    NSXPCConnection *_connectionToService;
    NSObject<SecureChannelService> *_remoteObject;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)runApproverFlowForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)actionForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

