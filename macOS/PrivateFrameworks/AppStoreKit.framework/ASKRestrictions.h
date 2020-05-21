//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, ASKCommerceAccountChangeNotifier;
@protocol OS_dispatch_queue;

@interface ASKRestrictions : NSObject
{
    long long _maximumAppContentRating;
    BOOL _isRunningInStoreDemoMode;
    BOOL _hasManagedAppleID;
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ASKCommerceAccountChangeNotifier *_changeNotifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASKCommerceAccountChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BOOL isAccountModificationRestricted;
@property(readonly, nonatomic) BOOL hasManagedAppleID;
@property(readonly, nonatomic) BOOL isRunningInStoreDemoMode;
@property(readonly, nonatomic) BOOL isAppInstallationAllowed;
@property(readonly, nonatomic) long long maximumAppContentRating;
- (BOOL)updateRestrictionsIfNeeded;
- (void)updateRestrictionsIfNeededAndNotify;
- (void)dealloc;
- (id)initWithAccountStore:(id)arg1;

@end

