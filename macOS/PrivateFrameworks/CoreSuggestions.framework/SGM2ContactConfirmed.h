//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2ContactConfirmed : PBCodable <NSCopying>
{
    int _app;
    int _extracted;
    NSString *_key;
    BOOL _firstNameAdj;
    BOOL _isUpdate;
    BOOL _lastNameAdj;
    BOOL _middleNameAdj;
    struct {
        unsigned int app:1;
        unsigned int extracted:1;
        unsigned int firstNameAdj:1;
        unsigned int isUpdate:1;
        unsigned int lastNameAdj:1;
        unsigned int middleNameAdj:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isUpdate; // @synthesize isUpdate=_isUpdate;
@property(nonatomic) BOOL middleNameAdj; // @synthesize middleNameAdj=_middleNameAdj;
@property(nonatomic) BOOL lastNameAdj; // @synthesize lastNameAdj=_lastNameAdj;
@property(nonatomic) BOOL firstNameAdj; // @synthesize firstNameAdj=_firstNameAdj;
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
- (int)StringAsExtracted:(id)arg1;
- (id)extractedAsString:(int)arg1;
@property(nonatomic) BOOL hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
@property(nonatomic) BOOL hasIsUpdate;
@property(nonatomic) BOOL hasMiddleNameAdj;
@property(nonatomic) BOOL hasLastNameAdj;
@property(nonatomic) BOOL hasFirstNameAdj;
- (int)StringAsApp:(id)arg1;
- (id)appAsString:(int)arg1;
@property(nonatomic) BOOL hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(readonly, nonatomic) BOOL hasKey;

@end

