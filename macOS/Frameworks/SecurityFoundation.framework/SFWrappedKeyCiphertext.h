//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

__attribute__((visibility("hidden")))
@interface SFWrappedKeyCiphertext : _SFCiphertext
{
    id _wrappedKeyCiphertextInternal;
}

- (void).cxx_destruct;
@property(readonly) _SFCiphertext *ciphertextKey;
- (id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2;

@end

