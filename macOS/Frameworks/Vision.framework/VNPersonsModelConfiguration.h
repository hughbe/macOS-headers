//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIdentities;
    unsigned long long _maximumFaceprintsPerIdentity;
    unsigned long long _faceprintRequestRevision;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
@property(nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property(nonatomic) unsigned long long maximumIdentities; // @synthesize maximumIdentities=_maximumIdentities;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long maximumFaceprintsPerIdentity; // @synthesize maximumFaceprintsPerIdentity=_maximumFaceprintsPerIdentity;
- (id)init;
- (int)faceIDModelMaximumElementsPerID;

@end

