//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveExperiments/NSCopying-Protocol.h>

@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMEngagedResponseList : PBCodable <NSCopying>
{
    unsigned long long _timeToTap;
    unsigned int _engagedItem;
    PREUMTrialExperiment *_experiment;
    int _generationStatus;
    int _inputMethod;
    NSMutableArray *_items;
    PREUMMessageMetadata *_msgMetadata;
    struct {
        unsigned int timeToTap:1;
        unsigned int engagedItem:1;
        unsigned int generationStatus:1;
        unsigned int inputMethod:1;
    } _has;
}

+ (Class)itemsType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeToTap; // @synthesize timeToTap=_timeToTap;
@property(nonatomic) unsigned int engagedItem; // @synthesize engagedItem=_engagedItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PREUMMessageMetadata *msgMetadata; // @synthesize msgMetadata=_msgMetadata;
@property(retain, nonatomic) PREUMTrialExperiment *experiment; // @synthesize experiment=_experiment;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsGenerationStatus:(id)arg1;
- (id)generationStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasGenerationStatus;
@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
- (int)StringAsInputMethod:(id)arg1;
- (id)inputMethodAsString:(int)arg1;
@property(nonatomic) BOOL hasInputMethod;
@property(nonatomic) int inputMethod; // @synthesize inputMethod=_inputMethod;
@property(nonatomic) BOOL hasTimeToTap;
@property(nonatomic) BOOL hasEngagedItem;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
@property(readonly, nonatomic) BOOL hasMsgMetadata;
@property(readonly, nonatomic) BOOL hasExperiment;

@end

