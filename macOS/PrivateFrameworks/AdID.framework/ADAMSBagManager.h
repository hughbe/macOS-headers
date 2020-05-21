//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/AMSBagConsumer-Protocol.h>

@class NSString;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>
{
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)sharedInstance;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (BOOL)authenticateAccountThroughAMSOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

