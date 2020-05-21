//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileAccessoryUpdater/AUServiceProtocol-Protocol.h>
#import <MobileAccessoryUpdater/FudPluginDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol FudPlugin;

@interface AUServiceAdapter : NSObject <AUServiceProtocol, FudPluginDelegate>
{
    id <FudPlugin> _updater;
    NSXPCConnection *_activeConnection;
}

+ (id)sharedInstance;
@property(nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(readonly, nonatomic) id <FudPlugin> updater; // @synthesize updater=_updater;
- (void)logv:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)log:(int)arg1 format:(id)arg2;
- (void)reportAnalytics:(id)arg1 info:(id)arg2;
- (void)progress:(double)arg1;
- (void)personalizationRequest:(id)arg1;
- (void)didFinish:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
- (void)didApply:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
- (void)didPrepare:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
- (void)didDownload:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
- (void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 needsDownload:(BOOL)arg4 error:(id)arg5;
- (void)didBootstrap:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
- (void)accessoryDisconnected:(id)arg1;
- (void)personalizationResponse:(id)arg1 response:(id)arg2 status:(id)arg3;
- (void)queryDeviceList:(CDUnknownBlockType)arg1;
- (void)finishWithOptions:(id)arg1;
- (void)applyFirmwareWithOptions:(id)arg1;
- (void)prepareFirmwareWithOptions:(id)arg1;
- (void)downloadFirmwareWithOptions:(id)arg1;
- (void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2;
- (void)bootstrapWithOptions:(id)arg1;
- (void)deviceClassAttached:(id)arg1 options:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (BOOL)hasActiveConnection;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

