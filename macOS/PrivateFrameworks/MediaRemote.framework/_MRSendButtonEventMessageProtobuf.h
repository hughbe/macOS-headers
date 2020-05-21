//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying>
{
    unsigned int _usage;
    unsigned int _usagePage;
    BOOL _buttonDown;
    struct {
        unsigned int usage:1;
        unsigned int usagePage:1;
        unsigned int buttonDown:1;
    } _has;
}

@property(nonatomic) BOOL buttonDown; // @synthesize buttonDown=_buttonDown;
@property(nonatomic) unsigned int usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned int usagePage; // @synthesize usagePage=_usagePage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasButtonDown;
@property(nonatomic) BOOL hasUsage;
@property(nonatomic) BOOL hasUsagePage;

@end

