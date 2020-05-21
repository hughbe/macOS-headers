//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet
{
    PKImage *_logoImage;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;
+ (long long)imageSetType;
- (void).cxx_destruct;
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

