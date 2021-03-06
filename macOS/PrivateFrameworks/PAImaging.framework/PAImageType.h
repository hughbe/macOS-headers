//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>

@interface PAImageType : NSObject <NSCopying>
{
    unsigned long long _quality;
    unsigned long long _variant;
}

+ (id)originalGeometry;
+ (id)original;
+ (id)originalThumbnail;
+ (id)renderedVersion;
+ (id)master;
+ (id)preview;
+ (id)thumbnail;
+ (id)typeForQuality:(unsigned long long)arg1 variant:(unsigned long long)arg2;
+ (id)descriptionForQuality:(unsigned long long)arg1;
+ (void)initialize;
- (BOOL)isEqualToImageType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (id)qualityShortDescription;
- (unsigned long long)variant;
- (unsigned long long)quality;
- (id)renderedVersionType;
- (id)masterType;
- (id)previewType;
- (id)thumbnailType;
- (id)_initWithQuality:(unsigned long long)arg1 variant:(unsigned long long)arg2;

@end

