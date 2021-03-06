//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying>
{
    PKDeviceVersionRange *_iphone;
    PKDeviceVersionRange *_watch;
    PKDeviceVersionRange *_ipad;
    PKDeviceVersionRange *_ipod;
    PKDeviceVersionRange *_appletv;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKDeviceVersionRange *appletv; // @synthesize appletv=_appletv;
@property(readonly, nonatomic) PKDeviceVersionRange *ipod; // @synthesize ipod=_ipod;
@property(readonly, nonatomic) PKDeviceVersionRange *ipad; // @synthesize ipad=_ipad;
@property(readonly, nonatomic) PKDeviceVersionRange *watch; // @synthesize watch=_watch;
@property(readonly, nonatomic) PKDeviceVersionRange *iphone; // @synthesize iphone=_iphone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToHardwareVersionRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)matchesDeviceVersion:(id)arg1;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end

