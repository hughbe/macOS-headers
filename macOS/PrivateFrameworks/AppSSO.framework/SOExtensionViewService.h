//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

#import <AppSSO/SORemoteExtensionViewProtocol-Protocol.h>

@class NSString, NSWindow, SORemoteExtensionContext;

__attribute__((visibility("hidden")))
@interface SOExtensionViewService : NSServiceViewController <SORemoteExtensionViewProtocol>
{
    NSWindow *_window;
    SORemoteExtensionContext *_extensionContext;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
@property __weak SORemoteExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)exportedInterface;
- (id)remoteViewControllerInterface;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

