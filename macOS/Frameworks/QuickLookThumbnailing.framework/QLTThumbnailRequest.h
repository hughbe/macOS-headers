//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSCopying-Protocol.h>
#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, QLCacheVersionedFileIdentifier;

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _shouldProvideFoldedGenericIcon;
    BOOL _iconMode;
    BOOL _wantsBaseline;
    int _flavor;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
    NSUUID *_uuid;
    double _scale;
    NSString *_contentType;
    unsigned long long _badgeType;
    double _minimumDimension;
    long long _generationBehavior;
    unsigned long long _requestedTypes;
    struct CGSize _size;
}

+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id *)arg6;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 error:(id *)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestedTypes; // @synthesize requestedTypes=_requestedTypes;
@property long long generationBehavior; // @synthesize generationBehavior=_generationBehavior;
@property BOOL wantsBaseline; // @synthesize wantsBaseline=_wantsBaseline;
@property(nonatomic) double minimumDimension; // @synthesize minimumDimension=_minimumDimension;
@property int flavor; // @synthesize flavor=_flavor;
@property(readonly) BOOL iconMode; // @synthesize iconMode=_iconMode;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) BOOL shouldProvideFoldedGenericIcon; // @synthesize shouldProvideFoldedGenericIcon=_shouldProvideFoldedGenericIcon;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) QLCacheVersionedFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, nonatomic) long long requestedMostRepresentativeType;
@property(readonly, nonatomic) BOOL forceGeneration;
@property(readonly, nonatomic) BOOL provideCachedResultsOnly;
@property(readonly, nonatomic) BOOL provideFullResolutionThumbnail;
@property(readonly, nonatomic) BOOL provideLowQualityThumbnail;
@property(readonly, nonatomic) BOOL provideGenericIcon;
- (id)computeContentType;
@property(readonly) float maximumPixelSize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersionedFileIdentifier:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 flavor:(int)arg5 wantsBaseline:(BOOL)arg6 minimumDimension:(double)arg7 requestedTypes:(unsigned long long)arg8;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

