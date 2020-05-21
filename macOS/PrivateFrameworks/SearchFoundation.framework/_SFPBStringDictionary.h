//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBStringDictionary-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding>
{
    NSArray *_keyValues;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *keyValues; // @synthesize keyValues=_keyValues;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)keyValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuesCount;
- (void)addKeyValues:(id)arg1;
- (void)clearKeyValues;
- (id)initWithNSDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

