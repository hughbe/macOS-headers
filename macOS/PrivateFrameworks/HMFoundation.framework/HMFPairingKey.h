//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
+ (void)load;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPairingKeyData:(id)arg1;
- (id)init;

@end

