//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/MKMultiLineLabelContainer-Protocol.h>

@class MKImageView, NSBox, NSDate, NSImage, NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentSummaryCell : MKTableViewCell <MKMultiLineLabelContainer>
{
    _MKUILabel *_titleLabel;
    _MKUILabel *_summaryLabel;
    _MKUILabel *_startedLabel;
    MKImageView *_iconImageView;
    NSBox *_separator;
    NSLayoutConstraint *_separatorHeightConstraint;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)multilineTextFieldsWithinContainer;
- (void)viewDidMoveToWindow;
- (double)_hairlineViewHeight;
- (void)_updateStartLabel;
@property(retain, nonatomic) NSImage *icon;
@property(copy, nonatomic) NSString *summary;
@property(copy, nonatomic) NSString *title;
- (void)setConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

