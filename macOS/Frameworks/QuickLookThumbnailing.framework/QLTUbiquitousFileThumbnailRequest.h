//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest
{
    FPItem *_item;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) FPItem *item; // @synthesize item=_item;
- (BOOL)shouldProvideFoldedGenericIcon;
- (id)computeContentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5;

// Remaining properties
@property(readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier; // @dynamic fileIdentifier;

@end

