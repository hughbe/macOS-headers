//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

@interface PKDisbursementVoucher : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
    NSURL *_redemptionURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *redemptionURL; // @synthesize redemptionURL=_redemptionURL;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToDisbursementVoucher:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

