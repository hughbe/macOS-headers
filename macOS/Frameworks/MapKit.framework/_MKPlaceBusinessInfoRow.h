//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSLayoutGuide, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView
{
    BOOL _needToRecalculateWidth;
    unsigned long long _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    NSLayoutGuide *_leftColumnGuide;
    NSLayoutGuide *_rightColumnGuide;
    double _width;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layout;
- (void)_createConstraints;
- (void)_updateFontAndTextColor:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

