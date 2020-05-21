//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlatformSupport-Protocol.h>

@class NSString;

@interface _INPBPlatformSupport : PBCodable <_INPBPlatformSupport, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int supportedPlatform:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _supportedPlatform;
    NSString *_minimumOsVersion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int supportedPlatform; // @synthesize supportedPlatform=_supportedPlatform;
@property(copy, nonatomic) NSString *minimumOsVersion; // @synthesize minimumOsVersion=_minimumOsVersion;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSupportedPlatform:(id)arg1;
- (id)supportedPlatformAsString:(int)arg1;
@property(nonatomic) BOOL hasSupportedPlatform;
@property(readonly, nonatomic) BOOL hasMinimumOsVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

