//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding>
{
    NSString *_passUniqueIdentifier;
    long long _bucket;
    double _magnitude;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
@property(nonatomic) long long bucket; // @synthesize bucket=_bucket;
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

