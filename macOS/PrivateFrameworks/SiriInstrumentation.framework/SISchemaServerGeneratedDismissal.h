//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaServerGeneratedDismissal : PBCodable
{
    int _serverGeneratedDismissalReason;
}

@property(nonatomic) int serverGeneratedDismissalReason; // @synthesize serverGeneratedDismissalReason=_serverGeneratedDismissalReason;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

