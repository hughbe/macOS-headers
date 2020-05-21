//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet
{
    PKImage *_faceImage;
    PKImage *_faceShadowImage;
    struct CGRect _logoRect;
    struct CGRect _thumbnailRect;
    struct CGRect _stripRect;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect stripRect; // @synthesize stripRect=_stripRect;
@property(nonatomic) struct CGRect thumbnailRect; // @synthesize thumbnailRect=_thumbnailRect;
@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
@property(retain, nonatomic) PKImage *faceShadowImage; // @synthesize faceShadowImage=_faceShadowImage;
@property(retain, nonatomic) PKImage *faceImage; // @synthesize faceImage=_faceImage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

