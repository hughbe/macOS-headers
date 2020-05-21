//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPaymentSetupRequest : PBRequest <NSCopying>
{
    NSString *_appName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAppName;

@end

