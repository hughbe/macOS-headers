//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLocalizable-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding>
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _updateVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned long long updateVersion; // @synthesize updateVersion=_updateVersion;
@property(readonly) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isGreaterThanVersion:(id)arg1;
- (BOOL)isAtLeastVersion:(id)arg1;
- (BOOL)isEqualToVersion:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *localizedDescription;
- (id)description;
@property(readonly, copy) NSString *versionString;
- (id)initWithVersionString:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)init;

@end

