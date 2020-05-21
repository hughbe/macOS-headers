//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying>
{
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData *_smartCriteria;
    BOOL _dynamic;
    BOOL _enabledItemsOnly;
    BOOL _filtered;
    BOOL _genius;
    BOOL _limited;
    BOOL _reverseLimitOrder;
    struct {
        unsigned int evaluationOrder:1;
        unsigned int limitKind:1;
        unsigned int limitOrder:1;
        unsigned int limitValue:1;
        unsigned int dynamic:1;
        unsigned int enabledItemsOnly:1;
        unsigned int filtered:1;
        unsigned int genius:1;
        unsigned int limited:1;
        unsigned int reverseLimitOrder:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL genius; // @synthesize genius=_genius;
@property(retain, nonatomic) NSData *smartCriteria; // @synthesize smartCriteria=_smartCriteria;
@property(nonatomic) BOOL reverseLimitOrder; // @synthesize reverseLimitOrder=_reverseLimitOrder;
@property(nonatomic) BOOL enabledItemsOnly; // @synthesize enabledItemsOnly=_enabledItemsOnly;
@property(nonatomic) unsigned int limitValue; // @synthesize limitValue=_limitValue;
@property(nonatomic) unsigned int limitOrder; // @synthesize limitOrder=_limitOrder;
@property(nonatomic) unsigned int evaluationOrder; // @synthesize evaluationOrder=_evaluationOrder;
@property(nonatomic) int limitKind; // @synthesize limitKind=_limitKind;
@property(nonatomic) BOOL limited; // @synthesize limited=_limited;
@property(nonatomic) BOOL filtered; // @synthesize filtered=_filtered;
@property(nonatomic) BOOL dynamic; // @synthesize dynamic=_dynamic;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGenius;
@property(readonly, nonatomic) BOOL hasSmartCriteria;
@property(nonatomic) BOOL hasReverseLimitOrder;
@property(nonatomic) BOOL hasEnabledItemsOnly;
@property(nonatomic) BOOL hasLimitValue;
@property(nonatomic) BOOL hasLimitOrder;
@property(nonatomic) BOOL hasEvaluationOrder;
@property(nonatomic) BOOL hasLimitKind;
@property(nonatomic) BOOL hasLimited;
@property(nonatomic) BOOL hasFiltered;
@property(nonatomic) BOOL hasDynamic;

@end

