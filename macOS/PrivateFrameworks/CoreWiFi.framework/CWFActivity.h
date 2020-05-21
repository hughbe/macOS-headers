//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWiFi/NSCopying-Protocol.h>
#import <CoreWiFi/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSString *_reason;
    long long _type;
    unsigned long long _timeout;
}

+ (BOOL)supportsSecureCoding;
+ (id)activityWithType:(long long)arg1 reason:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToActivity:(id)arg1;
- (id)description;
- (id)init;

@end

