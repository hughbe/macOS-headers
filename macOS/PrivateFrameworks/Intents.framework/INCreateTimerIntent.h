//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INCreateTimerIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setType:(long long)arg1;
@property(readonly) long long type;
- (void)setDuration:(double)arg1;
@property(readonly) double duration;
- (void)setLabel:(id)arg1;
@property(readonly, copy) INSpeakableString *label;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 type:(long long)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

