//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding>
{
    unsigned long long _priority;
    long long _cardType;
    long long _supportedProtocols;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentOptionDictionary:(id)arg1;

@end

