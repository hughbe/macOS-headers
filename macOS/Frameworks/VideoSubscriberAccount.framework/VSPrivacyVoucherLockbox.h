//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSArray, NSString, NSUndoManager, VSRemoteNotifier;

__attribute__((visibility("hidden")))
@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate>
{
    NSUndoManager *_undoManager;
    VSRemoteNotifier *_remoteNotifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void)removeAllVouchers;
@property(readonly, copy, nonatomic) NSArray *unredeemedVouchers;
- (void)setUnredeemedVouchers:(id)arg1;
- (id)_voucherArchiveURL;
- (void)redeemVoucher:(id)arg1;
- (void)issueVouchers:(id)arg1;
- (void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

