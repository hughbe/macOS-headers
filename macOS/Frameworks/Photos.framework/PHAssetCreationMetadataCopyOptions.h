//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying>
{
    BOOL _shouldCopyTitleDescriptionAndKeywords;
    BOOL _shouldCopySpatialOverCaptureResources;
}

+ (id)metadataCopyOptionsForPublishingOriginals;
@property(nonatomic) BOOL shouldCopySpatialOverCaptureResources; // @synthesize shouldCopySpatialOverCaptureResources=_shouldCopySpatialOverCaptureResources;
@property(nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords; // @synthesize shouldCopyTitleDescriptionAndKeywords=_shouldCopyTitleDescriptionAndKeywords;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)init;

@end

