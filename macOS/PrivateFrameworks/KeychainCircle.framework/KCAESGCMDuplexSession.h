//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeychainCircle/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding>
{
    _Bool _asSender;
    NSString *_pairingUUID;
    unsigned long long _piggybackingVersion;
    unsigned long long _epoch;
    unsigned long long _context;
    NSData *_secret;
    CDStruct_60067b7e *_send;
    CDStruct_60067b7e *_receive;
}

+ (BOOL)supportsSecureCoding;
+ (id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2;
+ (id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2;
- (void).cxx_destruct;
@property CDStruct_60067b7e *receive; // @synthesize receive=_receive;
@property CDStruct_60067b7e *send; // @synthesize send=_send;
@property(retain) NSData *secret; // @synthesize secret=_secret;
@property unsigned long long context; // @synthesize context=_context;
@property _Bool asSender; // @synthesize asSender=_asSender;
@property unsigned long long epoch; // @synthesize epoch=_epoch;
@property unsigned long long piggybackingVersion; // @synthesize piggybackingVersion=_piggybackingVersion;
@property(retain) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
- (void)finalize;
- (id)decryptAndVerify:(id)arg1 error:(id *)arg2;
- (id)encrypt:(id)arg1 error:(id *)arg2;
- (_Bool)GCM:(const struct ccmode_gcm *)arg1 context:(CDStruct_60067b7e *)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char *)arg5 processed:(char *)arg6 tag:(char *)arg7 error:(id *)arg8;
- (unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(_Bool)arg3 pairingUUID:(id)arg4 piggybackingVersion:(unsigned long long)arg5 epoch:(unsigned long long)arg6;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(_Bool)arg3;
- (id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2;
- (id)initAsSender:(id)arg1 context:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

