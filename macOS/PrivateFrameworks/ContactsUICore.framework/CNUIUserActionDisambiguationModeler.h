//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIUserActionRanking, CNUIUserActionTargetDiscovering;

@interface CNUIUserActionDisambiguationModeler : NSObject
{
    BOOL _tracksChanges;
    id <CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
    id <CNUIUserActionRanking> _rankingHelper;
    id <CNUIDefaultUserActionFetcher> _defaultActionFetcher;
    id <CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> discoveringEnvironment; // @synthesize discoveringEnvironment=_discoveringEnvironment;
@property(retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultActionFetcher; // @synthesize defaultActionFetcher=_defaultActionFetcher;
@property(retain, nonatomic) id <CNUIUserActionRanking> rankingHelper; // @synthesize rankingHelper=_rankingHelper;
@property(retain, nonatomic) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper; // @synthesize targetDiscoveringHelper=_targetDiscoveringHelper;
@property(nonatomic) BOOL tracksChanges; // @synthesize tracksChanges=_tracksChanges;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)sortActionsOnModel:(id)arg1;
- (id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 sorts:(BOOL)arg6 throttles:(BOOL)arg7;
- (id)recentActionsFromActions:(id)arg1;
- (id)defaultActionFromActions:(id)arg1;
- (id)defaultActionChangedObservable;
- (id)defaultActionFromActions:(id)arg1 trackingChanges:(BOOL)arg2;
- (id)_discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)targetsChangedObservableForActionType:(id)arg1;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 trackingChanges:(BOOL)arg3;
- (id)modelsWithContact:(id)arg1 actionType:(id)arg2;
- (id)schedulerProvider;
- (void)setContactStore:(id)arg1;
- (id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)init;

@end

