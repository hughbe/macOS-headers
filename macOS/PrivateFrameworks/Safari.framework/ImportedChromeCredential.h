//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSPasswordImportedCredential.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ImportedChromeCredential : WBSPasswordImportedCredential
{
    NSData *_encryptedPasswordBlob;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *encryptedPasswordBlob; // @synthesize encryptedPasswordBlob=_encryptedPasswordBlob;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 encryptedPasswordBlob:(id)arg2 url:(id)arg3;

@end

