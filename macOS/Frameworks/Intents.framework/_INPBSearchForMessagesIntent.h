//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMessagesIntent-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _attributes;
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBStringList *_content;
    _INPBStringList *_conversationIdentifier;
    _INPBDateTimeRange *_dateTimeRange;
    _INPBStringList *_groupName;
    _INPBStringList *_identifier;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_notificationIdentifier;
    _INPBContactList *_recipient;
    _INPBStringList *_searchTerm;
    _INPBContactList *_sender;
    _INPBDataStringList *_speakableGroupName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBContactList *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBStringList *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBStringList *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange; // @synthesize dateTimeRange=_dateTimeRange;
@property(retain, nonatomic) _INPBStringList *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) _INPBStringList *content; // @synthesize content=_content;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSpeakableGroupName;
@property(readonly, nonatomic) BOOL hasSender;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(readonly, nonatomic) BOOL hasRecipient;
@property(readonly, nonatomic) BOOL hasNotificationIdentifier;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(readonly, nonatomic) BOOL hasDateTimeRange;
@property(readonly, nonatomic) BOOL hasConversationIdentifier;
@property(readonly, nonatomic) BOOL hasContent;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long attributesCount;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

