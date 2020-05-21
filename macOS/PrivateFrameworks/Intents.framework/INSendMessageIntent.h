//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSendMessageIntentExport-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (BOOL)_isUserConfirmationRequired;
- (BOOL)_supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)_redactedDictionaryRepresentation;
@property long long messageType;
@property(copy) NSArray *attachments;
@property long long effect;
- (void)setSender:(id)arg1;
@property(readonly, copy) INPerson *sender;
- (void)setServiceName:(id)arg1;
@property(readonly, copy) NSString *serviceName;
- (void)setConversationIdentifier:(id)arg1;
@property(readonly, copy) NSString *conversationIdentifier;
- (void)setSpeakableGroupName:(id)arg1;
@property(readonly, copy) INSpeakableString *speakableGroupName;
- (void)setContent:(id)arg1;
@property(readonly, copy) NSString *content;
- (void)setRecipients:(id)arg1;
@property(readonly, copy) NSArray *recipients;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;
- (long long)_preferredInteractionDirection;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (BOOL)_isValidSubProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

