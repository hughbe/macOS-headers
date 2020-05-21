//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOScreenDimension, NSString, PBDataReader, PBUnknownFields;

@interface GEOCarInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _inputMethods;
    struct GEOScreenResolution _screenResolution;
    NSString *_carName;
    NSString *_manufacturer;
    NSString *_model;
    GEOScreenDimension *_screenDimension;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _brightness;
    int _colorRange;
    int _deviceConnection;
    int _navAidedDrivingStatus;
    BOOL _destinationSharingEnabled;
    struct {
        unsigned int has_screenResolution:1;
        unsigned int has_brightness:1;
        unsigned int has_colorRange:1;
        unsigned int has_deviceConnection:1;
        unsigned int has_navAidedDrivingStatus:1;
        unsigned int has_destinationSharingEnabled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_inputMethods:1;
        unsigned int read_carName:1;
        unsigned int read_manufacturer:1;
        unsigned int read_model:1;
        unsigned int read_screenDimension:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_engineTypes:1;
        unsigned int wrote_inputMethods:1;
        unsigned int wrote_screenResolution:1;
        unsigned int wrote_carName:1;
        unsigned int wrote_manufacturer:1;
        unsigned int wrote_model:1;
        unsigned int wrote_screenDimension:1;
        unsigned int wrote_brightness:1;
        unsigned int wrote_colorRange:1;
        unsigned int wrote_deviceConnection:1;
        unsigned int wrote_navAidedDrivingStatus:1;
        unsigned int wrote_destinationSharingEnabled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)carInfoWithTraits:(id)arg1;
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
- (int)StringAsInputMethods:(id)arg1;
- (id)inputMethodsAsString:(int)arg1;
- (void)setInputMethods:(int *)arg1 count:(unsigned long long)arg2;
- (int)inputMethodAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsInputMethod:(int)arg1;
- (void)addInputMethod:(int)arg1;
- (void)clearInputMethods;
@property(readonly, nonatomic) int *inputMethods;
@property(readonly, nonatomic) unsigned long long inputMethodsCount;
- (void)_readInputMethods;
@property(nonatomic) BOOL hasBrightness;
@property(nonatomic) int brightness;
@property(nonatomic) BOOL hasColorRange;
@property(nonatomic) int colorRange;
@property(retain, nonatomic) GEOScreenDimension *screenDimension;
@property(readonly, nonatomic) BOOL hasScreenDimension;
- (void)_readScreenDimension;
@property(retain, nonatomic) NSString *carName;
@property(readonly, nonatomic) BOOL hasCarName;
- (void)_readCarName;
- (int)StringAsEngineTypes:(id)arg1;
- (id)engineTypesAsString:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsEngineType:(int)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
- (void)_readEngineTypes;
- (int)StringAsNavAidedDrivingStatus:(id)arg1;
- (id)navAidedDrivingStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasNavAidedDrivingStatus;
@property(nonatomic) int navAidedDrivingStatus;
@property(nonatomic) BOOL hasDestinationSharingEnabled;
@property(nonatomic) BOOL destinationSharingEnabled;
- (int)StringAsDeviceConnection:(id)arg1;
- (id)deviceConnectionAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceConnection;
@property(nonatomic) int deviceConnection;
@property(nonatomic) BOOL hasScreenResolution;
@property(nonatomic) struct GEOScreenResolution screenResolution;
@property(retain, nonatomic) NSString *model;
@property(readonly, nonatomic) BOOL hasModel;
- (void)_readModel;
@property(retain, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) BOOL hasManufacturer;
- (void)_readManufacturer;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithTraits:(id)arg1;

@end

