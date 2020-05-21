//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INGenericIntent-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntentCodableDescription, INIntentKeyParameter, INParameterContexts, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, NSUUID, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    BOOL _hasLoadedKeyParameter;
    struct os_unfair_lock_s _keyParameterLock;
    BOOL _shouldForwardToAppOnSucccess;
    NSDictionary *_parameterCombinations;
    NSDictionary *_configurableParameterCombinations;
    INParameterContexts *_parameterContexts;
    long long _indexingHash;
    INIntentKeyParameter *_keyParameter;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSArray *_airPlayRouteIds;
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    long long __preferredInteractionDirection;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
+ (id)typeName;
+ (void)initialize;
+ (id)_ignoredParameters;
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long _preferredInteractionDirection; // @synthesize _preferredInteractionDirection=__preferredInteractionDirection;
@property(retain, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *recordDeviceIdentifier; // @synthesize recordDeviceIdentifier=_recordDeviceIdentifier;
@property(retain, nonatomic, setter=_setRecordDeviceUID:) NSUUID *recordDeviceUID; // @synthesize recordDeviceUID=_recordDeviceUID;
@property(copy, nonatomic, setter=_setRecordRoute:) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property(retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds; // @synthesize airPlayRouteIds=_airPlayRouteIds;
@property(copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, setter=_setShouldForwardToAppOnSuccess:) BOOL _shouldForwardToAppOnSucccess; // @synthesize _shouldForwardToAppOnSucccess;
@property(retain, nonatomic, setter=_setParameterContexts:) INParameterContexts *_parameterContexts; // @synthesize _parameterContexts;
@property(retain, nonatomic, setter=_setConfigurableParameterCombinations:) NSDictionary *_configurableParameterCombinations; // @synthesize _configurableParameterCombinations;
@property(retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
- (id)_spotlightContentType;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)_inCodable;
- (BOOL)_isValueValidForKey:(id)arg1 unsupportedReason:(id *)arg2;
- (BOOL)_isValidKey:(id)arg1;
@property(readonly, nonatomic) INIntentKeyParameter *_keyParameter; // @synthesize _keyParameter;
- (id)_className;
- (id)_intentInstanceDescription;
@property(readonly, nonatomic) INIntentCodableDescription *_codableDescription;
- (void)_updateWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
- (BOOL)isGenericIntent;
@property(copy) NSDictionary *parametersByName;
@property(copy, nonatomic, setter=_setParametersForcedToNeedsValue:) NSArray *_parametersForcedToNeedsValue;
@property(copy) NSString *verb;
@property(copy) NSString *domain;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)_typedBackingStore;
@property(readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property(readonly, nonatomic) NSArray *_codableAttributes;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *debugDescription;
- (id)_redactedDictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_emptyCopy;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData;
@property(nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL _userConfirmationRequired;
@property(readonly, nonatomic) long long _indexingHash; // @synthesize _indexingHash;
@property(readonly, nonatomic) long long _type;
- (id)_displayOrderedNonNilParameters;
- (id)_nonNilParameters;
@property(readonly, nonatomic, getter=_isEligibleForSuggestions) BOOL _eligibleForSuggestions;
@property(readonly, nonatomic, getter=_isConfigurable) BOOL _configurable;
- (BOOL)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL _supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property(readonly, nonatomic) NSDictionary *_resolvableParameterCombinations;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1 contentOptions:(unsigned long long)arg2;
@property(copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property(readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
- (id)_imageForParameter:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (id)_keyCodableAttributes;
- (id)keyImage;
- (id)imageForParameterNamed:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
@property(readonly, copy) NSString *intentDescription;
@property(copy) NSString *suggestedInvocationPhrase;
@property(retain, nonatomic, setter=_setIsOwnedByCurrentUser:) NSNumber *_isOwnedByCurrentUser;
@property(retain, nonatomic, setter=_setOriginatingDeviceRapportEffectiveIdentifier:) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property(retain, nonatomic, setter=_setOriginatingDeviceRapportMediaSystemIdentifier:) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property(retain, nonatomic, setter=_setOriginatingDeviceIdsIdentifier:) NSString *_originatingDeviceIDSIdentifier;
@property(nonatomic, getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:) BOOL _primaryDisplayDisabled;
@property(nonatomic, setter=_setIdiom:) long long _idiom;
@property(readonly, nonatomic) long long triggerMethod;
@property(nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property(retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property(retain, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property(retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property(retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property(retain, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
- (void)_setCategoryVerb:(id)arg1;
@property(readonly, nonatomic) NSString *_categoryVerb;
- (void)_setIntentCategory:(long long)arg1;
@property(readonly, nonatomic) long long _intentCategory;
- (id)_defaultImageName;
@property(readonly, nonatomic) NSString *intentId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property(readonly, nonatomic) NSString *typeName;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)_init;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) long long _intents_toggleState;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (id)intentSlotDescriptions;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5;
@property(readonly, copy) NSString *_localizedVerb;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_subtitleForLanguage:(id)arg1;
@property(readonly, copy) NSString *_subtitle;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1;
@property(readonly, copy) NSString *_title;
@property(readonly) BOOL _hasTitle;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_launchIdForCurrentPlatform;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;
- (BOOL)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly) Class superclass;

@end

