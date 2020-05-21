//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, _SFKeySpecifier;

__attribute__((visibility("hidden")))
@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying>
{
    id _wrappedKeyEncryptionOperationInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) SFSymmetricEncryptionOperation *sessionEncryptionOperation;
@property(copy, nonatomic) SFRSAEncryptionOperation *keyWrappingOperation;
@property(readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2;
- (id)initWithKeyWrappingOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

