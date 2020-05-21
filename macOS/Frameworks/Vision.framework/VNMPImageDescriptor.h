//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VNMPImageDescriptor : NSObject <NSSecureCoding, VNSerializingInternal>
{
    long long _internalNonSerializedDescriptorId;
    float _quality;
    float _nextLeafDescriptorDistance;
    float _previousLeafDescriptorDistance;
    float _nextLeafTotalDistance;
    float _previousLeafTotalDistance;
    NSString *_externalImageId;
    long long _exifTimestamp;
    void *_colorGaborDescriptor;
    void *_sceneClassifierDescriptor;
    void *_imageRegistrationDescriptor;
    long long _previousLeafId;
    long long _nextLeafId;
    long long _nextLeafTimestampDistance;
    long long _previousLeafTimestampDistance;
    NSString *_imageFilePath;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)currentVersion;
- (void).cxx_destruct;
@property(readonly) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property float previousLeafTotalDistance; // @synthesize previousLeafTotalDistance=_previousLeafTotalDistance;
@property float nextLeafTotalDistance; // @synthesize nextLeafTotalDistance=_nextLeafTotalDistance;
@property long long previousLeafTimestampDistance; // @synthesize previousLeafTimestampDistance=_previousLeafTimestampDistance;
@property long long nextLeafTimestampDistance; // @synthesize nextLeafTimestampDistance=_nextLeafTimestampDistance;
@property float previousLeafDescriptorDistance; // @synthesize previousLeafDescriptorDistance=_previousLeafDescriptorDistance;
@property float nextLeafDescriptorDistance; // @synthesize nextLeafDescriptorDistance=_nextLeafDescriptorDistance;
@property long long nextLeafId; // @synthesize nextLeafId=_nextLeafId;
@property long long previousLeafId; // @synthesize previousLeafId=_previousLeafId;
@property(readonly) void *imageRegistrationDescriptor; // @synthesize imageRegistrationDescriptor=_imageRegistrationDescriptor;
@property(readonly) void *sceneClassifierDescriptor; // @synthesize sceneClassifierDescriptor=_sceneClassifierDescriptor;
@property(readonly) void *colorGaborDescriptor; // @synthesize colorGaborDescriptor=_colorGaborDescriptor;
@property(readonly) float quality; // @synthesize quality=_quality;
@property(readonly) long long exifTimestamp; // @synthesize exifTimestamp=_exifTimestamp;
@property(readonly) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property(readonly) long long descriptorId; // @synthesize descriptorId=_internalNonSerializedDescriptorId;
- (id)initWithRawColorGaborDescriptor:(id)arg1;
@property(readonly) NSData *rawColorGaborDescriptor;
- (float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2;
- (float)distanceFromDescriptor:(id)arg1;
- (BOOL)computeQualityForImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (BOOL)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id *)arg4;
- (id)initWithImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)initWithImageData:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end

