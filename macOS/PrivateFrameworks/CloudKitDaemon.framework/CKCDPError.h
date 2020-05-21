//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPError : PBCodable <NSCopying>
{
    int _auxiliaryCode;
    NSString *_auxiliaryDomain;
    NSMutableArray *_auxiliaryUserInfos;
    int _code;
    NSString *_message;
    struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
    } _has;
}

+ (Class)auxiliaryUserInfoType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *auxiliaryUserInfos; // @synthesize auxiliaryUserInfos=_auxiliaryUserInfos;
@property(nonatomic) int auxiliaryCode; // @synthesize auxiliaryCode=_auxiliaryCode;
@property(retain, nonatomic) NSString *auxiliaryDomain; // @synthesize auxiliaryDomain=_auxiliaryDomain;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (void)clearAuxiliaryUserInfos;
@property(nonatomic) BOOL hasAuxiliaryCode;
@property(readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property(readonly, nonatomic) BOOL hasMessage;
- (int)StringAsCode:(id)arg1;
- (id)codeAsString:(int)arg1;
@property(nonatomic) BOOL hasCode;
@property(nonatomic) int code; // @synthesize code=_code;

@end

