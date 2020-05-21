//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject
{
    TransparencyTrustedKeyStore *_trustedKeyStore;
}

- (void).cxx_destruct;
@property(retain) TransparencyTrustedKeyStore *trustedKeyStore; // @synthesize trustedKeyStore=_trustedKeyStore;
- (BOOL)verifyConsistencyProof:(id)arg1 startLogHead:(id)arg2 endLogHead:(id)arg3 error:(id *)arg4;
- (BOOL)verifyConsistencyProof:(id)arg1 startHash:(id)arg2 startSize:(unsigned long long)arg3 endHash:(id)arg4 endSize:(unsigned long long)arg5 error:(id *)arg6;
- (id)initWithTrustedKeyStore:(id)arg1;

@end

