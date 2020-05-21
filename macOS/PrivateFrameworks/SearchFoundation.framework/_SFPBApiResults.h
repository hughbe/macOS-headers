//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBApiResults-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>
{
    int _status;
    int _resultType;
    NSArray *_flights;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

