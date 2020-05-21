//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPayloadEncryption : NSObject
{
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;
- (void)initializeKey;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)init;

@end

