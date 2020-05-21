//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PFVideoComplement : NSObject
{
    NSString *_imagePath;
    NSString *_videoPath;
    NSDictionary *_metadata;
    NSString *_originalPairingIdentifier;
    CDStruct_1b6d18a9 _originalImageDisplayTime;
    CDStruct_1b6d18a9 _originalVideoDuration;
    BOOL _didReadOriginalMetadata;
}

+ (id)currentFormatVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(readonly, copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (BOOL)writeToBundleAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)linkOrCopyPath:(id)arg1 toPath:(id)arg2 forceCopy:(BOOL)arg3 error:(id *)arg4;
- (id)propertyListRepresentation;
- (id)initWithBundleAtURL:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)init;
@property(readonly, nonatomic) CDStruct_1b6d18a9 originalImageDisplayTime;
@property(readonly, copy, nonatomic) NSString *originalPairingIdentifier;
@property(readonly, nonatomic) CDStruct_1b6d18a9 originalVideoDuration;
- (void)_readMetadataIfNeeded;
@property(readonly, nonatomic) CDStruct_1b6d18a9 imageDisplayTime;
@property(readonly, copy, nonatomic) NSString *pairingIdentifier;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(CDStruct_1b6d18a9)arg3 pairingIdentifier:(id)arg4;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2;

@end

