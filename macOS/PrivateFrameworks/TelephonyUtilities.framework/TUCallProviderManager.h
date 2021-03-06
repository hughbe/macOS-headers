//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSourceDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>
{
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCallProviderManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

+ (int)serviceForProvider:(id)arg1 video:(BOOL)arg2;
+ (id)defaultProviders;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) id <TUCallProviderManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)providersChangedForDataSource:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)providerForRecentCall:(id)arg1;
- (id)providersPassingTest:(CDUnknownBlockType)arg1;
- (id)providerWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *providers;
@property(readonly, nonatomic) TUCallProvider *emergencyProvider;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)providerWithService:(int)arg1 video:(char *)arg2;
@property(readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property(readonly, nonatomic) TUCallProvider *telephonyProvider;
@property(readonly, nonatomic) TUCallProvider *voicemailProvider;
@property(readonly, nonatomic) TUCallProvider *defaultProvider;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithPairedHostDeviceProviders;
- (id)initWithLocalProviders;
- (id)init;
- (id)dialRequestForRecentCall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

