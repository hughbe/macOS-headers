//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionDiscoveringEnvironment, CNUIUserActionTargetDiscovering;

@protocol CNUIUserActionDiscoveringEnvironment <NSObject>
@property(readonly, nonatomic) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property(readonly, nonatomic) id <CNUIRTTUtilities> ttyUtilities;
@property(readonly, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property(readonly, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(readonly, nonatomic) id <CNCapabilities> capabilities;
@property(readonly, nonatomic) id <CNMCProfileConnection> profileConnection;
@property(readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property(readonly, nonatomic) id <CNTUCallProviderManager> callProviderManager;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace;
- (id <CNUIUserActionDiscoveringEnvironment>)copyWithContactStore:(CNContactStore *)arg1;
@end

