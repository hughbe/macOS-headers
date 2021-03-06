//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSData, NSString, VNImageprint;

@interface VNImageprintObservation : VNObservation
{
    BOOL _imageprintValid;
    VNImageprint *_imageprint;
    NSString *_imageprintVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)observationWithImageprint:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imageprintVersion; // @synthesize imageprintVersion=_imageprintVersion;
@property(readonly, nonatomic) BOOL imageprintValid; // @synthesize imageprintValid=_imageprintValid;
@property(retain, nonatomic) VNImageprint *imageprint; // @synthesize imageprint=_imageprint;
@property(readonly, nonatomic) NSData *rawImageprintDescriptor;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (BOOL)isImageprintValid;
- (float)calculateDistanceFromImageprintObservation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

