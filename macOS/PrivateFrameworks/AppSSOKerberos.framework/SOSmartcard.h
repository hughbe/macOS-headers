//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOSmartcard : NSObject
{
}

+ (id)searchForCachedIdentityWithSerial:(struct __CFData *)arg1 withIssuer:(struct __CFData *)arg2 withTokenID:(id)arg3;
+ (_Bool)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3;
+ (int)getIdentityForPersistentRef:(struct __CFData *)arg1 identityToReturn:(struct __SecIdentity **)arg2;
+ (struct __SecIdentity *)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2;

@end

