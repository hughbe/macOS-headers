//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INGenericIntentResponse-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentResponseExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableDescription, INImage, INIntentResponseCodableCode, INIntentResponseDescription, NSDictionary, NSString, NSUserActivity, PBCodable, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INEnumerable, INKeyImageProducing, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding>
{
    BOOL __userConfirmationRequired;
    long long _code;
    _INPBIntentResponse *_backingStore;
    PBCodable *_responseMessagePBRepresentation;
    INCodableDescription *_codableDescription;
    NSUserActivity *_userActivity;
    long long __stage;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromIntentResponseCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL _userConfirmationRequired; // @synthesize _userConfirmationRequired=__userConfirmationRequired;
@property(nonatomic, setter=_setStage:) long long _stage; // @synthesize _stage=__stage;
@property(copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)_inCodable;
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isValidKey:(id)arg1;
@property(retain, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation; // @synthesize _responseMessagePBRepresentation;
- (long long)_codeWithName:(id)arg1;
- (long long)_stageWithName:(id)arg1;
@property(copy) NSDictionary *propertiesByName;
- (id)initWithPropertiesByName:(id)arg1;
@property(readonly, nonatomic) INCodableDescription *_codableDescription; // @synthesize _codableDescription;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)_updateWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property(nonatomic, setter=_setRequiresProtectedData:) BOOL _requiresProtectedData;
@property(nonatomic, setter=_setRequiresAuthentication:) BOOL _requiresAuthentication;
@property(readonly, nonatomic) long long _type;
@property(readonly, nonatomic) NSString *_className;
@property(readonly, nonatomic) BOOL _shouldForwardIntentToApp;
@property(readonly, nonatomic) INIntentResponseDescription *_instanceDescription;
@property(readonly, nonatomic) INIntentResponseCodableCode *_intentResponseCodableCode;
@property(readonly, nonatomic) long long _intentResponseCode;
- (long long)_intentHandlingStatus;
@property(retain, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)_payloadResponseMessageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
- (long long)_code;
- (void)_setCode:(long long)arg1;
- (BOOL)_commonInit;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (id)intentSlotDescriptions;
@property(readonly) long long _intents_toggleState;
- (id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (id)_propertiesByNameWithLocalizer:(id)arg1;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_responseTemplateWithLocalizer:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (id)_responseTemplateForLanguage:(id)arg1;
@property(readonly, nonatomic, getter=_isSuccess) BOOL _success;
- (id)_originatingBundleIdentifier;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;
- (BOOL)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

