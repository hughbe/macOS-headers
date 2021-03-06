//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUViewGeometry : NSObject
{
    BOOL _flipped;
    double _backingScale;
    double _angle;
    double _maximumScale;
    struct CGSize _imageSize;
    struct CGPoint _origin;
    struct NSEdgeInsets _contentInsets;
    struct CGRect _cropRect;
}

@property(nonatomic) double maximumScale; // @synthesize maximumScale=_maximumScale;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic, getter=isFlipped) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) struct NSEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) struct CGRect boundingCropRect;
- (struct NSEdgeInsets)contentInsetsWithScale:(double)arg1;
- (struct CGRect)insetBoundsForCrop:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 inFrame:(struct CGRect)arg3;
- (struct CGRect)proposedBoundsForBounds:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect imageBounds;
@property(readonly, nonatomic) struct CGSize viewImageSize;
- (id)init;

@end

