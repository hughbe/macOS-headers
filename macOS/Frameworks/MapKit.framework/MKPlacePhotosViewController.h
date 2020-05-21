//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKPlaceAttributionCellDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPhotoBigAttributionView, MKPhotoSmallAttributionView, MKPlaceAttributionCell, NSArray, NSLayoutConstraint, NSScrollView, NSString, NSView, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate;

@interface MKPlacePhotosViewController : _MKUIViewController <MKPlaceAttributionCellDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKPhotoBigAttributionView *_attributionView;
    NSArray *_photoViews;
    NSScrollView *_photosContainerScrollView;
    NSView *_photosContainer;
    MKPhotoSmallAttributionView *_photosSmallAttributionsView;
    double _lastPhotoScrollOffset;
    BOOL _photoScrollViewScrollingLeft;
    BOOL _photoScrollViewScrollingRight;
    BOOL _canUseFullscreenViewer;
    BOOL _photoLoaded;
    BOOL _loadAppImageCanceledOrFailed;
    BOOL _isRTL;
    unsigned long long _photosCount;
    NSView *_externalView;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    unsigned long long _options;
    MKPlaceAttributionCell *_attributionCell;
    NSScrollView *_parentScrollView;
    _MKPlaceViewController *_owner;
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
- (void)viewDidLayout;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)didTapAttributionViewWithPresentingViewController:(id)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_photoSelected:(id)arg1;
- (void)_loadPhotos;
- (void)_cancelLoadPhotos;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)scrollDidEndScrolling:(id)arg1;
- (void)scrollBoundsDidChange:(id)arg1;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)layoutImages;
- (void)_applyCornerRadius;
- (void)_createImageViews;
- (void)openURL;
- (id)attributionString;
- (id)formattedAttributionString;
- (void)updateAttributionCell;
- (void)addAttributionCell;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (BOOL)isSafariProcess;
- (BOOL)isParsecProcess;
- (BOOL)isSiriProcess;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

