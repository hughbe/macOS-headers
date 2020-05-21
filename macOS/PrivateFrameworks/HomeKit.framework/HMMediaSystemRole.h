//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMMediaSystemRole : NSObject <NSSecureCoding>
{
    unsigned long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)rightRole;
+ (id)leftRole;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

