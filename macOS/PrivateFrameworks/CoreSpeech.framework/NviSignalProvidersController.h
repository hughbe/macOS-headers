//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMapTable;
@protocol NviAssetsProvider;

@interface NviSignalProvidersController : NSObject
{
    id <NviAssetsProvider> _assetsProvider;
    NSDictionary *_dataSrcMap;
    NSMapTable *_sigProvidersMap;
    NSHashTable *_currActiveSigProvTypes;
    NSHashTable *_currActiveDataSourceTypes;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *currActiveDataSourceTypes; // @synthesize currActiveDataSourceTypes=_currActiveDataSourceTypes;
@property(retain, nonatomic) NSHashTable *currActiveSigProvTypes; // @synthesize currActiveSigProvTypes=_currActiveSigProvTypes;
@property(retain, nonatomic) NSMapTable *sigProvidersMap; // @synthesize sigProvidersMap=_sigProvidersMap;
@property(retain, nonatomic) NSDictionary *dataSrcMap; // @synthesize dataSrcMap=_dataSrcMap;
@property(retain, nonatomic) id <NviAssetsProvider> assetsProvider; // @synthesize assetsProvider=_assetsProvider;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg1;
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)arg1;
- (void)unregisterSignalProviderDelegate:(id)arg1 forSignalType:(unsigned long long)arg2;
- (void)registerSignalProviderDelegate:(id)arg1 forSignalTypes:(unsigned long long)arg2;
- (void)_iterateSignalMask:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)_stopCurrentlyRunningSignalProviders;
- (void)_stopDataSources;
- (void)reset;
- (void)startWithNviContext:(id)arg1;
- (void)_startSignalProvidersWithContext:(id)arg1;
- (void)_startDataSourcesWithContext:(id)arg1;
- (BOOL)_setupSignalProviders:(id)arg1;
- (void)dealloc;
- (id)initWithAssetsProvider:(id)arg1 dataSourceMap:(id)arg2 signalProviderToDataSourceMap:(id)arg3;

@end

