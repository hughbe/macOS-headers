//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>
{
    NSArray *_cardSections;
    NSString *_fbr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

