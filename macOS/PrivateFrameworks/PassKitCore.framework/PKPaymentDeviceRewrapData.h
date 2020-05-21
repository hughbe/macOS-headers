//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding>
{
    NSData *_platformData;
    NSData *_platformDataSignature;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *platformDataSignature; // @synthesize platformDataSignature=_platformDataSignature;
@property(copy, nonatomic) NSData *platformData; // @synthesize platformData=_platformData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

