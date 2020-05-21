//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAgentLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>
{
    NSObject<OS_os_log> *_log_t;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void)willRenewValues:(id)arg1 withDonor:(id)arg2;
- (void)didRenewValue:(id)arg1 untilDate:(id)arg2;
- (void)couldNotRenewBecauseNotADonorExtension:(id)arg1;
- (void)couldNotRenewBecauseLoadingError:(id)arg1;
- (void)couldNotRenewBecauseDonorError:(id)arg1;
- (void)didRemoveAllRejections;
- (void)willRemoveAllRejections;
- (void)didListRejections;
- (void)willListRejections;
- (void)couldNotRejectClusterIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRejectUnknownClusterIdentifier:(id)arg1;
- (void)didRejectClusterIdentifier:(id)arg1;
- (void)willRejectClusterIdentifier:(id)arg1;
- (void)couldNotRejectDonationIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRejectUnknownDonationIdentifier:(id)arg1;
- (void)didRejectDonationIdentifier:(id)arg1;
- (void)willRejectDonationIdentifier:(id)arg1;
- (void)willSaveExtensionVersions;
- (void)willLoadExtensionVersions;
- (void)didFailToDiscoverExtensions:(id)arg1;
- (void)didDiscoverExtensions;
- (void)didDiscoverUnexpectedExtensionType:(id)arg1;
- (void)didDiscoverExtension:(id)arg1;
- (void)willDiscoverExtensions;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)arg1;
- (void)contactsChangedNotificationFoundName:(BOOL)arg1 nameChanged:(BOOL)arg2;
- (void)featureDidEnable;
- (void)featureWillEnable;
- (void)featureDidDisable;
- (void)featureWillDisable;
- (void)featureNotEnabled:(SEL)arg1;
- (void)agentDidHandleRequest:(SEL)arg1;
- (void)agentWillHandleRequest:(SEL)arg1;
- (void)preExpiredDonations:(id)arg1;
- (void)acceptingDonations:(id)arg1;
- (void)denyingRequestFromProcess:(int)arg1;
- (void)acceptingConnectionFromProcess:(int)arg1;
- (void)endRestorePersistedState;
- (void)beginRestorePersistedState;
- (void)maintenanceServiceWillStop;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)donationServiceWillStop;
- (void)donationServiceDidStart;
- (void)donationServiceWillStart;
- (void)agentWillStop;
- (void)agentDidStart;
- (void)agentWillStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

