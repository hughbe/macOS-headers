//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelImageprint.h>

@interface VNFaceprint : VNEspressoModelImageprint
{
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (id)currentVersion;
- (BOOL)isEqual:(id)arg1;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;

@end

