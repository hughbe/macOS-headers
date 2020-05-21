//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTableAlignmentSchema-Protocol.h>

@class NSArray, NSData, NSString, _SFPBStringDictionary;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding>
{
    NSArray *_tableColumnAlignments;
    _SFPBStringDictionary *_metadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _SFPBStringDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *tableColumnAlignments; // @synthesize tableColumnAlignments=_tableColumnAlignments;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)tableColumnAlignmentCount;
- (void)addTableColumnAlignment:(id)arg1;
- (void)clearTableColumnAlignment;
- (void)setTableColumnAlignment:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

