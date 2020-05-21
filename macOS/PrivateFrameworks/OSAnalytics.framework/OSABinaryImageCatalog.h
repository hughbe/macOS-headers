//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, OSABinaryImageSegment;

@interface OSABinaryImageCatalog : NSObject
{
    OSABinaryImageSegment *_absolute_segment;
    OSABinaryImageSegment *_kernel_cache_segment;
    NSMutableArray *_kernel_segments;
    NSMutableArray *_rootedCacheLibs;
    OSABinaryImageSegment *_targeted_cache;
    unsigned long long _targeted_slide;
    NSMutableDictionary *_shared_segments;
    NSMutableArray *_used_segments;
    NSMutableArray *_notes;
}

+ (BOOL)isApplePath:(id)arg1 orBundle:(id)arg2;
- (void).cxx_destruct;
- (id)reportUsedImagesLegacyInfo;
- (id)reportUsedImages;
- (id)searchFrame:(unsigned long long)arg1 in:(id)arg2 result:(id *)arg3;
- (void)appendNotesTo:(id)arg1;
- (BOOL)isAddressInTargetedCache:(unsigned long long)arg1;
- (void)targetSharedCache:(unsigned char [16])arg1 withSlide:(unsigned long long)arg2 atBaseAddress:(unsigned long long)arg3;
- (unsigned long long)markImageAsUsed:(id)arg1 from:(int)arg2;
- (void)setRootedCacheLibs:(struct dyld_uuid_info_64 *)arg1 count:(unsigned int)arg2;
- (void)setKernelCache:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)setKernelImages:(id)arg1;
- (id)init;

@end

