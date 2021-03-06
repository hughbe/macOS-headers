//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentVersionInfo, NSArray;

@interface IPAAdjustmentStack : NSObject <NSCopying>
{
    IPAAdjustmentVersionInfo *_versionInfo;
    NSArray *_adjustments;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *adjustments; // @synthesize adjustments=_adjustments;
@property(copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo; // @synthesize versionInfo=_versionInfo;
- (id)_debugDescriptionSuffix;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqualToAdjustmentStack:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)minimumVersionForFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

