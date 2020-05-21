//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying>
{
    NSString *_identifier;
    BOOL _showNotification;
    struct {
        unsigned int showNotification:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showNotification; // @synthesize showNotification=_showNotification;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasShowNotification;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

