//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface VSAuditToken : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSData *_tokenBytes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *tokenBytes; // @synthesize tokenBytes=_tokenBytes;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

