//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSharingServiceDelegate-Protocol.h>
#import <MapKit/NSSharingServicePickerDelegate-Protocol.h>

@class NSArray, NSSharingServicePicker, NSString, NSURL;
@protocol NSSharingServiceDelegate><NSSharingServicePickerDelegate, _MKPlaceItem;

@interface MKSharingController : NSObject <NSSharingServicePickerDelegate, NSSharingServiceDelegate>
{
    id <_MKPlaceItem> _placeItem;
    NSURL *_airDropURL;
    NSString *_vCardTemporaryPath;
    id <NSSharingServiceDelegate><NSSharingServicePickerDelegate> _delegate;
    NSSharingServicePicker *_picker;
    NSURL *_mapsURL;
    NSString *_name;
    NSArray *_items;
}

+ (void)addMapItemToContacts:(id)arg1;
+ (id)sharingControllerForPlaceItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSURL *mapsURL; // @synthesize mapsURL=_mapsURL;
@property(nonatomic) __weak id <NSSharingServiceDelegate><NSSharingServicePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_exportVCard;
@property(copy, nonatomic) NSString *vCardTemporaryPath;
- (id)sharingService:(id)arg1 optionsForItems:(id)arg2;
- (BOOL)sharingService:(id)arg1 canShareAlternatePDFForItems:(id)arg2;
- (struct CGRect)sharingService:(id)arg1 opaqueFrameForSourceWindow:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
@property(readonly, nonatomic) NSSharingServicePicker *picker; // @synthesize picker=_picker;
- (id)airDropURL;
- (void)dealloc;
- (id)initWithPlaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

