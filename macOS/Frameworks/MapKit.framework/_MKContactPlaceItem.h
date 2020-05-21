//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/_MKPlaceItem-Protocol.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem>
{
    MKMapItem *_mapItem;
    CNContact *_contact;
    unsigned long long _options;
}

+ (id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasContactOnly;
@property(readonly, nonatomic) BOOL isIntermediateMapItem;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) BOOL isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;

@end

