//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPaymentHeroImageManifest, PKPaymentWebService;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject
{
    PKPaymentWebService *_webService;
    NSString *_primaryImageIdentifier;
    NSArray *_featuredImages;
    PKPaymentHeroImageManifest *_manifest;
    id <PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

+ (struct CGSize)cardArtSizeForWatchViewSize:(struct CGSize)arg1;
+ (id)defaultImages;
- (void).cxx_destruct;
@property(nonatomic) long long watchSize; // @synthesize watchSize=_watchSize;
@property(nonatomic) id <PKPaymentHeroImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPaymentHeroImageManifest *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSArray *featuredImages; // @synthesize featuredImages=_featuredImages;
@property(copy, nonatomic) NSString *primaryImageIdentifier; // @synthesize primaryImageIdentifier=_primaryImageIdentifier;
- (struct CGSize)cardArtSizeForSize:(struct CGSize)arg1;
- (void)downloadImages:(id)arg1;
- (id)featuredDefaultImages;
- (id)filterImages:(id)arg1;
- (id)featuredImageIdentifiers;
- (id)initWithManifest:(id)arg1 webService:(id)arg2;

@end

