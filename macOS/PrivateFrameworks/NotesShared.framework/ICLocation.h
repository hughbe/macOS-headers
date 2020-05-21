//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSData, NSString;

@interface ICLocation : NSManagedObject
{
    BOOL updatingPlace;
    CLPlacemark *_placemark;
}

+ (id)searchStringsForPlacemark:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL updatingPlace; // @synthesize updatingPlace;
- (void)didTurnIntoFault;
- (void)setLocationFromPlacemark:(id)arg1;
- (void)setLocationFromURL:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddress;
- (id)searchStrings;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;

// Remaining properties
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSData *placemarkData; // @dynamic placemarkData;

@end

