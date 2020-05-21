//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForNotebookItemsIntentExport-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>
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
- (void)setNotebookItemIdentifier:(id)arg1;
@property(readonly, copy) NSString *notebookItemIdentifier;
@property BOOL includeAllNoteContents;
@property(copy) INSpeakableString *groupName;
- (void)setTaskPriority:(long long)arg1;
@property(readonly) long long taskPriority;
- (void)setTemporalEventTriggerTypes:(unsigned long long)arg1;
@property(readonly) unsigned long long temporalEventTriggerTypes;
- (void)setDateSearchType:(long long)arg1;
@property(readonly) long long dateSearchType;
- (void)setDateTime:(id)arg1;
@property(readonly, copy) INDateComponentsRange *dateTime;
- (void)setLocationSearchType:(long long)arg1;
@property(readonly) long long locationSearchType;
- (void)setLocation:(id)arg1;
@property(readonly, copy) CLPlacemark *location;
- (void)setStatus:(long long)arg1;
@property(readonly) long long status;
- (void)setItemType:(long long)arg1;
@property(readonly) long long itemType;
- (void)setContent:(id)arg1;
@property(readonly, copy) NSString *content;
- (void)setTitle:(id)arg1;
@property(readonly, copy) INSpeakableString *title;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

