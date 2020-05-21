//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding>
{
    NSData *_altIRK;
    NSUUID *_identifier;
    NSData *_publicKey;
    NSData *_secretKey;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *altIRK; // @synthesize altIRK=_altIRK;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

