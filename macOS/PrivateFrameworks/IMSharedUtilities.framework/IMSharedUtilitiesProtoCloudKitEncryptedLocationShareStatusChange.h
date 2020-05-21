//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <NSCopying>
{
    long long _shareDirection;
    long long _shareStatus;
    NSString *_otherHandle;
    NSData *_padding;
    unsigned int _version;
    struct {
        unsigned int shareDirection:1;
        unsigned int shareStatus:1;
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(nonatomic) long long shareDirection; // @synthesize shareDirection=_shareDirection;
@property(nonatomic) long long shareStatus; // @synthesize shareStatus=_shareStatus;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPadding;
@property(readonly, nonatomic) BOOL hasOtherHandle;
@property(nonatomic) BOOL hasShareDirection;
@property(nonatomic) BOOL hasShareStatus;
@property(nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

