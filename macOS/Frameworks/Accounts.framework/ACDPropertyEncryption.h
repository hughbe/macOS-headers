//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDPropertyEncryption : NSObject
{
}

+ (id)_decryptableDataForStoredProperty:(id)arg1;
+ (id)decryptProperty:(id)arg1;
+ (id)encryptProperty:(id)arg1;
+ (struct __SecKey *)accountPropertyCryptoKeyCreatingIfNecessary:(BOOL)arg1;

@end

