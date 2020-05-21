//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INRequestRideIntentExport-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INPaymentMethod, INSpeakableString, NSNumber, NSString;

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>
{
}

+ (id)_ignoredParameters;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (BOOL)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setScheduledPickupTime:(id)arg1;
@property(readonly, copy) INDateComponentsRange *scheduledPickupTime;
- (void)setPaymentMethod:(id)arg1;
@property(readonly, copy) INPaymentMethod *paymentMethod;
- (void)setPartySize:(id)arg1;
@property(readonly, copy) NSNumber *partySize;
- (void)setRideOptionName:(id)arg1;
@property(readonly, copy) INSpeakableString *rideOptionName;
- (void)setDropOffLocation:(id)arg1;
@property(readonly, copy) CLPlacemark *dropOffLocation;
- (void)setPickupLocation:(id)arg1;
@property(readonly, copy) CLPlacemark *pickupLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 scheduledPickupTime:(id)arg6;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

