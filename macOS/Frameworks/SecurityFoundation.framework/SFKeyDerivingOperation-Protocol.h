//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class _SFSymmetricKey, _SFSymmetricKeySpecifier;

@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>
+ (long long)keySource;
- (_SFSymmetricKey *)deriveKeyWithSpecifier:(_SFSymmetricKeySpecifier *)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
@end

