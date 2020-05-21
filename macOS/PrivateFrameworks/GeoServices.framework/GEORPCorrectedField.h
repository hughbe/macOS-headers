//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPCorrectedField : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_correctedValue;
    NSString *_fieldName;
    NSString *_originalValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _field;
    BOOL _isMarkedIncorrect;
    struct {
        unsigned int has_field:1;
        unsigned int has_isMarkedIncorrect:1;
        unsigned int read_correctedValue:1;
        unsigned int read_fieldName:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_correctedValue:1;
        unsigned int wrote_fieldName:1;
        unsigned int wrote_originalValue:1;
        unsigned int wrote_field:1;
        unsigned int wrote_isMarkedIncorrect:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsMarkedIncorrect;
@property(nonatomic) BOOL isMarkedIncorrect;
@property(retain, nonatomic) NSString *correctedValue;
@property(readonly, nonatomic) BOOL hasCorrectedValue;
- (void)_readCorrectedValue;
@property(retain, nonatomic) NSString *originalValue;
@property(readonly, nonatomic) BOOL hasOriginalValue;
- (void)_readOriginalValue;
@property(retain, nonatomic) NSString *fieldName;
@property(readonly, nonatomic) BOOL hasFieldName;
- (void)_readFieldName;
- (int)StringAsField:(id)arg1;
- (id)fieldAsString:(int)arg1;
@property(nonatomic) BOOL hasField;
@property(nonatomic) int field;
- (id)initWithData:(id)arg1;
- (id)init;

@end

