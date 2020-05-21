//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>

@interface VCPProtoTime : PBCodable <NSCopying>
{
    long long _epoch;
    long long _value;
    unsigned int _flags;
    int _timescale;
}

+ (id)timeWithCMTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) int timescale; // @synthesize timescale=_timescale;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (CDStruct_1b6d18a9)timeValue;

@end

