//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencePanesSupport/NSXPCListenerDelegate-Protocol.h>
#import <PreferencePanesSupport/PPSpecifierExtensionNotifying-Protocol.h>

@class AdminAuthenticator, NSString, NSXPCConnection, NSXPCListener, PPSpecifierViewController;
@protocol OS_dispatch_queue;

@interface PPSpecifierExtensionManager : NSObject <NSXPCListenerDelegate, PPSpecifierExtensionNotifying>
{
    BOOL _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
    PPSpecifierViewController *_viewController;
    NSXPCConnection *_connection;
    NSString *_bundleIdentifier;
    NSXPCListener *_listener;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak PPSpecifierViewController *viewController; // @synthesize viewController=_viewController;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)performSystemAdministrationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAutorized;
- (void)deauthorize;
- (void)authorize:(id)arg1;
- (void)serviceViewControllerDidAwake:(id)arg1;
- (void)resumeConnectionWithEndpoint:(id)arg1;
- (void)setPersonality:(id)arg1;
- (void)revealElementForKey:(id)arg1;
- (void)updateView;
- (void)didUnselect;
- (void)willSelect;
- (void)setEditable:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

