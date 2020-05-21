//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantInformation : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantAdditionalData;
    NSString *_merchantAddress;
    NSString *_merchantCanl;
    NSString *_merchantCity;
    NSString *_merchantCountryCode;
    NSString *_merchantDoingBusinessAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantId;
    NSString *_merchantRawAddress;
    NSString *_merchantRawCity;
    NSString *_merchantRawState;
    NSString *_merchantState;
    NSString *_merchantType;
    NSString *_merchantZip;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _merchantCleanConfidenceLevel;
    struct {
        unsigned int has_merchantCleanConfidenceLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_merchantAdditionalData:1;
        unsigned int read_merchantAddress:1;
        unsigned int read_merchantCanl:1;
        unsigned int read_merchantCity:1;
        unsigned int read_merchantCountryCode:1;
        unsigned int read_merchantDoingBusinessAsName:1;
        unsigned int read_merchantEnhancedName:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantRawAddress:1;
        unsigned int read_merchantRawCity:1;
        unsigned int read_merchantRawState:1;
        unsigned int read_merchantState:1;
        unsigned int read_merchantType:1;
        unsigned int read_merchantZip:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_merchantAdditionalData:1;
        unsigned int wrote_merchantAddress:1;
        unsigned int wrote_merchantCanl:1;
        unsigned int wrote_merchantCity:1;
        unsigned int wrote_merchantCountryCode:1;
        unsigned int wrote_merchantDoingBusinessAsName:1;
        unsigned int wrote_merchantEnhancedName:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantRawAddress:1;
        unsigned int wrote_merchantRawCity:1;
        unsigned int wrote_merchantRawState:1;
        unsigned int wrote_merchantState:1;
        unsigned int wrote_merchantType:1;
        unsigned int wrote_merchantZip:1;
        unsigned int wrote_merchantCleanConfidenceLevel:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) NSString *merchantCanl;
@property(readonly, nonatomic) BOOL hasMerchantCanl;
- (void)_readMerchantCanl;
@property(retain, nonatomic) NSString *merchantAdditionalData;
@property(readonly, nonatomic) BOOL hasMerchantAdditionalData;
- (void)_readMerchantAdditionalData;
@property(nonatomic) BOOL hasMerchantCleanConfidenceLevel;
@property(nonatomic) int merchantCleanConfidenceLevel;
@property(retain, nonatomic) NSString *merchantType;
@property(readonly, nonatomic) BOOL hasMerchantType;
- (void)_readMerchantType;
@property(retain, nonatomic) NSString *merchantCountryCode;
@property(readonly, nonatomic) BOOL hasMerchantCountryCode;
- (void)_readMerchantCountryCode;
@property(retain, nonatomic) NSString *merchantRawAddress;
@property(readonly, nonatomic) BOOL hasMerchantRawAddress;
- (void)_readMerchantRawAddress;
@property(retain, nonatomic) NSString *merchantAddress;
@property(readonly, nonatomic) BOOL hasMerchantAddress;
- (void)_readMerchantAddress;
@property(retain, nonatomic) NSString *merchantZip;
@property(readonly, nonatomic) BOOL hasMerchantZip;
- (void)_readMerchantZip;
@property(retain, nonatomic) NSString *merchantRawState;
@property(readonly, nonatomic) BOOL hasMerchantRawState;
- (void)_readMerchantRawState;
@property(retain, nonatomic) NSString *merchantState;
@property(readonly, nonatomic) BOOL hasMerchantState;
- (void)_readMerchantState;
@property(retain, nonatomic) NSString *merchantRawCity;
@property(readonly, nonatomic) BOOL hasMerchantRawCity;
- (void)_readMerchantRawCity;
@property(retain, nonatomic) NSString *merchantCity;
@property(readonly, nonatomic) BOOL hasMerchantCity;
- (void)_readMerchantCity;
@property(retain, nonatomic) NSString *merchantEnhancedName;
@property(readonly, nonatomic) BOOL hasMerchantEnhancedName;
- (void)_readMerchantEnhancedName;
@property(retain, nonatomic) NSString *merchantDoingBusinessAsName;
@property(readonly, nonatomic) BOOL hasMerchantDoingBusinessAsName;
- (void)_readMerchantDoingBusinessAsName;
@property(retain, nonatomic) NSString *merchantId;
@property(readonly, nonatomic) BOOL hasMerchantId;
- (void)_readMerchantId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

