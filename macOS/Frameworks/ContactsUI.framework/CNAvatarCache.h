//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAvatarCacheChangeListenerDelegate-Protocol.h>

@class CNAvatarCacheChangeListener, CNCache, CNContactStore, CNObservable, NSString;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver;

@interface CNAvatarCache : NSObject <CNAvatarCacheChangeListenerDelegate>
{
    BOOL _liveUpdating;
    CNObservable *_contactStoreChangeNotificationWatcher;
    id <CNUIPRLikenessResolver> _likenessResolver;
    CNContactStore *_contactStore;
    CNCache *_likenessCache;
    id <CNSchedulerProvider> _schedulerProvider;
    CNAvatarCacheChangeListener *_changeHistoryListener;
}

+ (long long)photoAndDefaultProhibitedSources;
+ (long long)defaultProhibitedSources;
+ (id)os_log;
- (void).cxx_destruct;
@property(nonatomic) BOOL liveUpdating; // @synthesize liveUpdating=_liveUpdating;
@property(readonly, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener; // @synthesize changeHistoryListener=_changeHistoryListener;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNCache *likenessCache; // @synthesize likenessCache=_likenessCache;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(readonly, nonatomic) CNObservable *contactStoreChangeNotificationWatcher; // @synthesize contactStoreChangeNotificationWatcher=_contactStoreChangeNotificationWatcher;
- (void)updateContactsWithIdentifiers:(id)arg1;
- (id)oneShotQueryForLikenessOfContact:(id)arg1;
- (id)refetchContact:(id)arg1;
- (void)updateLikenessForEntry:(id)arg1;
- (void)performFirstResolutionForEntry:(id)arg1;
- (id)likenessHandlerForContact:(id)arg1;
- (void)invalidateObservables:(id)arg1;
- (id)lastKnownLikenessForContact:(id)arg1;
- (void)invalidate;
- (id)initWithLikenessResolver:(id)arg1 contactStore:(id)arg2;
- (id)initWithLikenessResolver:(id)arg1;
- (id)initWithProhibitedSources:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

