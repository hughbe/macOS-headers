//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_extension;
}

+ (id)withName:(id)arg1 extension:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (BOOL)isEqualToBundleResourceDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 extension:(id)arg2;

@end

