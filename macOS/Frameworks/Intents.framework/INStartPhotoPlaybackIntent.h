//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INStartPhotoPlaybackIntentExport-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@interface INStartPhotoPlaybackIntent : INIntent <INStartPhotoPlaybackIntentExport>
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
- (void)setPeopleInPhoto:(id)arg1;
@property(readonly) long long peopleInPhotoOperator;
@property(readonly, copy) NSArray *peopleInPhoto;
- (void)setExcludedAttributes:(unsigned long long)arg1;
@property(readonly) unsigned long long excludedAttributes;
- (void)setIncludedAttributes:(unsigned long long)arg1;
@property(readonly) unsigned long long includedAttributes;
- (void)setSearchTerms:(id)arg1;
@property(readonly) long long searchTermsOperator;
@property(readonly, copy) NSArray *searchTerms;
- (void)setAlbumName:(id)arg1;
@property(readonly, copy) NSString *albumName;
- (void)setLocationCreated:(id)arg1;
@property(readonly, copy) CLPlacemark *locationCreated;
- (void)setDateCreated:(id)arg1;
@property(readonly, copy) INDateComponentsRange *dateCreated;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
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

