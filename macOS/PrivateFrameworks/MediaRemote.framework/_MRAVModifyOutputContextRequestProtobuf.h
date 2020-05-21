//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_addingOutputDeviceUIDs;
    int _outputContextType;
    NSMutableArray *_removingOutputDeviceUIDs;
    NSMutableArray *_settingOutputDeviceUIDs;
    struct {
        unsigned int outputContextType:1;
    } _has;
}

+ (Class)settingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)addingOutputDeviceUIDType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs; // @synthesize settingOutputDeviceUIDs=_settingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs; // @synthesize removingOutputDeviceUIDs=_removingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs; // @synthesize addingOutputDeviceUIDs=_addingOutputDeviceUIDs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)settingOutputDeviceUIDsCount;
- (void)addSettingOutputDeviceUID:(id)arg1;
- (void)clearSettingOutputDeviceUIDs;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (void)addRemovingOutputDeviceUID:(id)arg1;
- (void)clearRemovingOutputDeviceUIDs;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)addAddingOutputDeviceUID:(id)arg1;
- (void)clearAddingOutputDeviceUIDs;
- (int)StringAsOutputContextType:(id)arg1;
- (id)outputContextTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasOutputContextType;
@property(nonatomic) int outputContextType; // @synthesize outputContextType=_outputContextType;

@end

