//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MapKit/MKPlaceHoursViewDelegate-Protocol.h>

@class GEOLinkedService, MKImageView, NSArray, NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceCompleteHoursView : NSView <MKPlaceHoursViewDelegate>
{
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    NSView *_containerViewForHoursAndCategoryName;
    MKImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
    NSArray *_placeHoursViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *placeHoursViews; // @synthesize placeHoursViews=_placeHoursViews;
- (void)hoursViewDidUpdate:(id)arg1;
- (void)_setUpConstraints;
- (void)_contentSizeDidChange;
- (void)commonInit;
- (id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

