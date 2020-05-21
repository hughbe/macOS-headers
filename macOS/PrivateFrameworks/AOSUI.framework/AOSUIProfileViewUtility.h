//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/AOSUIProfileRemoteViewControllerDelegate-Protocol.h>

@class AOSUIProfileViewCacheController, AOSUIProfileViewRootViewController, NSRemoteViewController, NSString, NSViewController;

@interface AOSUIProfileViewUtility : NSObject <AOSUIProfileRemoteViewControllerDelegate>
{
    CDUnknownBlockType _updateOverlayPrefPaneBlock;
    NSRemoteViewController *_remoteViewController;
    NSViewController *_cacheViewController;
    AOSUIProfileViewRootViewController *_rootViewController;
    AOSUIProfileViewCacheController *_cacheController;
}

+ (id)sharedProfileViewUtility;
+ (void)requestProfileViewController:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain) AOSUIProfileViewCacheController *cacheController; // @synthesize cacheController=_cacheController;
@property(retain) AOSUIProfileViewRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain) NSViewController *cacheViewController; // @synthesize cacheViewController=_cacheViewController;
@property(retain) NSRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(copy) CDUnknownBlockType updateOverlayPrefPaneBlock; // @synthesize updateOverlayPrefPaneBlock=_updateOverlayPrefPaneBlock;
- (void)_updateImageCache;
- (void)profileRemoteViewController_updateOverlayPrefPane:(BOOL)arg1 prefPanesToHide:(id)arg2;
- (void)updateOverlay:(CDUnknownBlockType)arg1;
- (id)serviceProxy;
@property(readonly) NSViewController *viewController; // @dynamic viewController;
- (void)_updateProfileViewFromCache;
- (void)_requestRemoteProfileViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

