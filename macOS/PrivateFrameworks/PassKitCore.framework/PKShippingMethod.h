//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSummaryItem.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_detail;
}

+ (BOOL)supportsSecureCoding;
+ (long long)version;
+ (id)shippingMethodWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)formattedString;
- (BOOL)isEqualToShippingMethod:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)protobuf;

@end

