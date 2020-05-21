//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosFormats/NSCopying-Protocol.h>
#import <PhotosFormats/NSMutableCopying-Protocol.h>
#import <PhotosFormats/NSSecureCoding-Protocol.h>

@class AVApplePortraitMetadata, NSString;

@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_effectFilterName;
    NSString *_portraitEffectFilterName;
    AVApplePortraitMetadata *_portraitMetadata;
    BOOL _depthEnabled;
    struct CGRect _cropRect;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic, getter=isDepthEnabled) BOOL depthEnabled; // @synthesize depthEnabled=_depthEnabled;
@property(readonly, nonatomic) AVApplePortraitMetadata *portraitMetadata; // @synthesize portraitMetadata=_portraitMetadata;
@property(readonly, copy, nonatomic) NSString *portraitEffectFilterName; // @synthesize portraitEffectFilterName=_portraitEffectFilterName;
@property(readonly, copy, nonatomic) NSString *effectFilterName; // @synthesize effectFilterName=_effectFilterName;
@property(readonly, nonatomic) BOOL hasCrop;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdjustments:(id)arg1;

@end

