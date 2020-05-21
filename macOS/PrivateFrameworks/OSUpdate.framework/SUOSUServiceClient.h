//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSUpdate/SUOSUServiceClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface SUOSUServiceClient : NSObject <SUOSUServiceClientProtocol>
{
    int _pid;
    unsigned int _uid;
    NSXPCConnection *_connection;
    NSString *_name;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property unsigned int uid; // @synthesize uid=_uid;
@property int pid; // @synthesize pid=_pid;
- (void)postAndProceedWithAutoUpdateNotification:(CDUnknownBlockType)arg1;
- (void)mdmMajorOSUpdateStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)arg1 orVersion:(id)arg2;
- (void)queueAutoUpdatesForLater;
- (void)startInstallingDoItLaterUpdates;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)arg1 offerLater:(BOOL)arg2;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)doMDMMajorOSDownloadAndUpdateWithBundleID:(id)arg1 orVersion:(id)arg2;
- (BOOL)isActiveClient;
- (id)description;
- (id)initWithConnection:(id)arg1;

@end

