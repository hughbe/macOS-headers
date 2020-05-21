//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying>
{
    NSString *_key;
    unsigned int _messageIndex;
    int _nameClass;
    unsigned int _nameTokens;
    NSString *_patternHash;
    int _patternType;
    struct {
        unsigned int messageIndex:1;
        unsigned int nameClass:1;
        unsigned int nameTokens:1;
        unsigned int patternType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int messageIndex; // @synthesize messageIndex=_messageIndex;
@property(nonatomic) unsigned int nameTokens; // @synthesize nameTokens=_nameTokens;
@property(retain, nonatomic) NSString *patternHash; // @synthesize patternHash=_patternHash;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMessageIndex;
- (int)StringAsNameClass:(id)arg1;
- (id)nameClassAsString:(int)arg1;
@property(nonatomic) BOOL hasNameClass;
@property(nonatomic) int nameClass; // @synthesize nameClass=_nameClass;
@property(nonatomic) BOOL hasNameTokens;
@property(readonly, nonatomic) BOOL hasPatternHash;
- (int)StringAsPatternType:(id)arg1;
- (id)patternTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPatternType;
@property(nonatomic) int patternType; // @synthesize patternType=_patternType;
@property(readonly, nonatomic) BOOL hasKey;

@end

