//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFAESKeySpecifier;

__attribute__((visibility("hidden")))
@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation
{
    id _aesEncryptionOperationInternal;
}

- (void).cxx_destruct;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;

// Remaining properties
@property(copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier; // @dynamic encryptionKeySpecifier;

@end

