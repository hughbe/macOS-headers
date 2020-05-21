//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, SPHandle;

@interface SPLocationProvider : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    SPHandle *_provider;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) SPHandle *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTimestamp:(id)arg1 provider:(id)arg2;

@end

