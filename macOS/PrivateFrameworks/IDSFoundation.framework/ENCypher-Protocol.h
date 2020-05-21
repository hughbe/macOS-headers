//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/NSObject-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class ENAccountIdentity, NSData, NSString;
@protocol ENDevicePublicKey;

@protocol ENCypher <NSSecureCoding, NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (NSData *)decypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 signingDevicePublicKey:(id <ENDevicePublicKey>)arg3 identifier:(NSString *)arg4 error:(id *)arg5;
- (NSData *)cypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 identifier:(id *)arg3 error:(id *)arg4;
@end

