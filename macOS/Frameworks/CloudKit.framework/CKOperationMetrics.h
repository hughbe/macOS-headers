//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding>
{
    CKMetric *_cloudKitMetrics;
    CKMetric *_MMCSMetrics;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CKMetric *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(retain, nonatomic) CKMetric *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
- (id)dictionaryRepresentation;
- (void)unionMetrics:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

