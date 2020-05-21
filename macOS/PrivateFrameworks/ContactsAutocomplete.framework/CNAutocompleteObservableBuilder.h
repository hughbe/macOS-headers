//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteObservableBuilder-Protocol.h>

@class NSString;
@protocol CNAutocompleteObservableBuilderBatchingHelper, CNAutocompleteProbeProvider, CNScheduler;

@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder>
{
    BOOL _supplementalResultsUseNetwork;
    id <CNAutocompleteObservableBuilderBatchingHelper> _batchingHelper;
    id <CNAutocompleteProbeProvider> _probeProvider;
    double _networkActivityStartDelay;
    CDUnknownBlockType _networkActivityDidStartHandler;
    CDUnknownBlockType _networkActivityDidStopHandler;
    id <CNScheduler> _scheduler;
}

+ (BOOL)supplementalResultsUseNetwork:(unsigned long long)arg1;
+ (id)builderWithSearchType:(unsigned long long)arg1 scheduler:(id)arg2 probeProvider:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) CDUnknownBlockType networkActivityDidStopHandler; // @synthesize networkActivityDidStopHandler=_networkActivityDidStopHandler;
@property(copy, nonatomic) CDUnknownBlockType networkActivityDidStartHandler; // @synthesize networkActivityDidStartHandler=_networkActivityDidStartHandler;
@property(nonatomic) BOOL supplementalResultsUseNetwork; // @synthesize supplementalResultsUseNetwork=_supplementalResultsUseNetwork;
@property(nonatomic) double networkActivityStartDelay; // @synthesize networkActivityStartDelay=_networkActivityStartDelay;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(readonly, nonatomic) id <CNAutocompleteObservableBuilderBatchingHelper> batchingHelper; // @synthesize batchingHelper=_batchingHelper;
- (id)makeObservable;
- (id)combineObservablesInBatch:(id)arg1 scheduler:(id)arg2;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addCachedCalendarServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addCachedDirectoryServerObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (void)addLocalExtensionObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (id)probeObservable:(id)arg1 forPerformanceWithBlock:(CDUnknownBlockType)arg2;
- (id)initWithBatchingHelper:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

