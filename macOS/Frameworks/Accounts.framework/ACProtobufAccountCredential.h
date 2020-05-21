//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccountCredential : PBCodable <NSCopying>
{
    NSMutableArray *_credentialItems;
    NSString *_credentialType;
    NSMutableArray *_dirtyProperties;
    BOOL _requiresTouchID;
}

+ (Class)dirtyPropertiesType;
+ (Class)credentialItemsType;
- (void).cxx_destruct;
@property(nonatomic) BOOL requiresTouchID; // @synthesize requiresTouchID=_requiresTouchID;
@property(retain, nonatomic) NSMutableArray *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSMutableArray *credentialItems; // @synthesize credentialItems=_credentialItems;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (void)addDirtyProperties:(id)arg1;
- (void)clearDirtyProperties;
- (id)credentialItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)credentialItemsCount;
- (void)addCredentialItems:(id)arg1;
- (void)clearCredentialItems;
@property(copy, nonatomic) NSDictionary *credentialItemsDictionary;

@end

