//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/NSSecureCoding-Protocol.h>
#import <DifferentialPrivacy/_DPStorageMOConversion-Protocol.h>

@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>
{
    BOOL _submitted;
    short _majorVersion;
    short _minorVersion;
    double _creationDate;
    NSManagedObjectID *_objectId;
}

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) BOOL submitted; // @synthesize submitted=_submitted;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) short minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) short majorVersion; // @synthesize majorVersion=_majorVersion;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToModelInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4;
- (id)init;

@end

