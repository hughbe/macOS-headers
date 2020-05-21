//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_SEKey : NSObject
{
    long long _SEKeyType;
    struct aks_ref_key_s *_AKSRefKey;
    struct __SecAccessControl *_accessControl;
    id _keyType;
    struct __SecKey *_key;
}

+ (BOOL)hasSystemUIK;
+ (int)keyClassForProtection:(id)arg1;
+ (id)protectionForKeyClass:(int)arg1;
+ (void)setupKeybagForTesting:(BOOL)arg1;
+ (void)runsInSystemSession;
+ (BOOL)hasSEP;
- (void).cxx_destruct;
@property(readonly) struct __SecKey *key; // @synthesize key=_key;
@property(readonly) id keyType; // @synthesize keyType=_keyType;
@property(readonly) struct __SecAccessControl *accessControl; // @synthesize accessControl=_accessControl;
- (id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
@property(readonly) NSDictionary *attributes;
- (void)dealloc;
- (BOOL)lifetimeControlWithType:(long long)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)attestKey:(id)arg1 nonce:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (id)recryptData:(id)arg1 attributes:(id)arg2 ACMContext:(id)arg3 error:(id *)arg4;
- (id)computeSharedSecret:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)signDigest:(id)arg1 ACMContext:(id)arg2 error:(id *)arg3;
- (id)publicKeyWithError:(id *)arg1;
- (BOOL)deleteWithACMContext:(id)arg1 error:(id *)arg2;
@property(readonly) id objectID;
- (id)initWithKeyType:(id)arg1 accessControl:(struct __SecAccessControl *)arg2 applePayEnabled:(BOOL)arg3 ACMContext:(id)arg4 error:(id *)arg5;
- (id)initWithObjectID:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)error:(id *)arg1 withAKSReturn:(int)arg2 ACMContext:(id)arg3 AKSOperation:(id)arg4 message:(id)arg5;
- (id)parametersWithContext:(id)arg1;

@end

