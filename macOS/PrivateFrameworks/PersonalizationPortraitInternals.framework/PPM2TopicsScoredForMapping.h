//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicsScoredForMapping : PBCodable <NSCopying>
{
    NSString *_bundleId;
    NSString *_mappingId;
    unsigned int _resultSizeLog10;
    BOOL _error;
    BOOL _exclusionSpec;
    BOOL _limitHit;
    BOOL _timeLimited;
    BOOL _timeSpec;
    CDStruct_68ee747f _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL limitHit; // @synthesize limitHit=_limitHit;
@property(nonatomic) BOOL timeSpec; // @synthesize timeSpec=_timeSpec;
@property(nonatomic) BOOL error; // @synthesize error=_error;
@property(nonatomic) BOOL exclusionSpec; // @synthesize exclusionSpec=_exclusionSpec;
@property(nonatomic) BOOL timeLimited; // @synthesize timeLimited=_timeLimited;
@property(nonatomic) unsigned int resultSizeLog10; // @synthesize resultSizeLog10=_resultSizeLog10;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLimitHit;
@property(nonatomic) BOOL hasTimeSpec;
@property(nonatomic) BOOL hasError;
@property(nonatomic) BOOL hasExclusionSpec;
@property(nonatomic) BOOL hasTimeLimited;
@property(nonatomic) BOOL hasResultSizeLog10;
@property(readonly, nonatomic) BOOL hasMappingId;
@property(readonly, nonatomic) BOOL hasBundleId;

@end

