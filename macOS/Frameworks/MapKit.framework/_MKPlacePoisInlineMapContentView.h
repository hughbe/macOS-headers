//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView
{
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
    BOOL _visible;
}

+ (id)defaultAnimationForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
- (struct CGSize)intrinsicContentSize;
- (double)mapViewHeight;
- (void)setLocationsNumber:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)useImageView;
- (BOOL)hasTitle;

@end

