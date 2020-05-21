//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _includeIcon;
    BOOL _includeBadgeIcon;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL includeBadgeIcon; // @synthesize includeBadgeIcon=_includeBadgeIcon;
@property(readonly, nonatomic) BOOL includeIcon; // @synthesize includeIcon=_includeIcon;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToApplicationDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 includeIcon:(BOOL)arg2 includeBadgeIcon:(BOOL)arg3;
- (id)init;

@end

