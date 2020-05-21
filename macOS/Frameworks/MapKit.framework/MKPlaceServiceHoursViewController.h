//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSScrollView, NSStackView, NSString;
@protocol MKPlaceServiceHoursViewControllerProtocol;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    long long _type;
    NSScrollView *_scrollView;
    NSStackView *_stackView;
    id <MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
    MKMapItem *_mapItem;
}

+ (id)titleString;
+ (id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate; // @synthesize placeServiceDelegate=_placeServiceDelegate;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)captureCloseAnalytics;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)_updateServiceHourRows;
- (void)_contentSizeDidChange;
- (void)_showAllHeaderButtonTapped;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 type:(long long)arg2;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

