//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBValueMetadata-Protocol.h>

@class NSString, _INPBConfidenceScore;

@interface _INPBValueMetadata : PBCodable <_INPBValueMetadata, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int confirmed:1;
    } _has;
    BOOL _confirmed;
    BOOL __encodeLegacyGloryData;
    NSString *_canonicalValue;
    _INPBConfidenceScore *_confidenceScore;
    NSString *_input;
    NSString *_source;
    NSString *_sourceAppBundleIdentifier;
    NSString *_uuid;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *sourceAppBundleIdentifier; // @synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(retain, nonatomic) _INPBConfidenceScore *confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSString *canonicalValue; // @synthesize canonicalValue=_canonicalValue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasUuid;
@property(readonly, nonatomic) BOOL hasSourceAppBundleIdentifier;
@property(readonly, nonatomic) BOOL hasSource;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (id)requiredEntitlementsAsString:(int)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@property(readonly, nonatomic) int *requiredEntitlements;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasInput;
@property(nonatomic) BOOL hasConfirmed;
@property(readonly, nonatomic) BOOL hasConfidenceScore;
@property(readonly, nonatomic) BOOL hasCanonicalValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

