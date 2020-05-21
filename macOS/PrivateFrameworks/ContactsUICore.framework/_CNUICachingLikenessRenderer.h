//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUILikenessRendering-Protocol.h>

@class CNCache, CNQueue, NSString, _CNUILikenessRenderer;
@protocol CNSchedulerProvider, OS_dispatch_source;

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering>
{
    struct os_unfair_lock_s _lock;
    BOOL _shouldRequireMainThread;
    _CNUILikenessRenderer *_renderer;
    id <CNSchedulerProvider> _schedulerProvider;
    CNCache *_imageCache;
    CNQueue *_evictionQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;
}

+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider; // @synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(retain, nonatomic) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain, nonatomic) CNCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) BOOL shouldRequireMainThread; // @synthesize shouldRequireMainThread=_shouldRequireMainThread;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) _CNUILikenessRenderer *renderer; // @synthesize renderer=_renderer;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (void)refreshCacheKey:(id)arg1;
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3;
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;
- (id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (void)emptyCache:(id)arg1;
- (void)dealloc;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(BOOL)arg4;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

