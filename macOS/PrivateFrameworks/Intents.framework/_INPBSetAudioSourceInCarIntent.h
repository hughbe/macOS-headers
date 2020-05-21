//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetAudioSourceInCarIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioSource:1;
        unsigned int relativeAudioSourceReference:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _audioSource;
    int _relativeAudioSourceReference;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int relativeAudioSourceReference; // @synthesize relativeAudioSourceReference=_relativeAudioSourceReference;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int audioSource; // @synthesize audioSource=_audioSource;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
@property(nonatomic) BOOL hasRelativeAudioSourceReference;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsAudioSource:(id)arg1;
- (id)audioSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

