//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface PXLivePhotoTrimScrubberSpec : NSObject
{
    BOOL _fallbackToKeyTimeTracking;
    BOOL _fallbackToPlayheadTracking;
    BOOL _useMiniScrubberHeight;
    double _scrubberHeight;
    double _handleTouchDistance;
    double _handleWidth;
    double _handleHeight;
    double _handleAnchorX;
    double _loupeOuterCornerRadius;
    double _loupeInnerCornerRadius;
    double _filmstripCornerRadius;
    NSColor *_disabledOverlayColor;
    struct NSEdgeInsets _filmstripViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useMiniScrubberHeight; // @synthesize useMiniScrubberHeight=_useMiniScrubberHeight;
@property(nonatomic) BOOL fallbackToPlayheadTracking; // @synthesize fallbackToPlayheadTracking=_fallbackToPlayheadTracking;
@property(nonatomic) BOOL fallbackToKeyTimeTracking; // @synthesize fallbackToKeyTimeTracking=_fallbackToKeyTimeTracking;
@property(retain, nonatomic) NSColor *disabledOverlayColor; // @synthesize disabledOverlayColor=_disabledOverlayColor;
@property(nonatomic) double filmstripCornerRadius; // @synthesize filmstripCornerRadius=_filmstripCornerRadius;
@property(nonatomic) double loupeInnerCornerRadius; // @synthesize loupeInnerCornerRadius=_loupeInnerCornerRadius;
@property(nonatomic) double loupeOuterCornerRadius; // @synthesize loupeOuterCornerRadius=_loupeOuterCornerRadius;
@property(nonatomic) struct NSEdgeInsets filmstripViewInsets; // @synthesize filmstripViewInsets=_filmstripViewInsets;
@property(nonatomic) double handleAnchorX; // @synthesize handleAnchorX=_handleAnchorX;
@property(nonatomic) double handleHeight; // @synthesize handleHeight=_handleHeight;
@property(nonatomic) double handleWidth; // @synthesize handleWidth=_handleWidth;
@property(nonatomic) double handleTouchDistance; // @synthesize handleTouchDistance=_handleTouchDistance;
@property(nonatomic) double scrubberHeight; // @synthesize scrubberHeight=_scrubberHeight;
- (void)_updateScrubberHeight;
- (id)init;

@end

