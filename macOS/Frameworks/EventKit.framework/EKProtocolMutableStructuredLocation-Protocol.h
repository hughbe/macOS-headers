//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKProtocolMutableObject-Protocol.h>
#import <EventKit/EKProtocolStructuredLocation-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol EKProtocolMutableStructuredLocation <EKProtocolStructuredLocation, EKProtocolMutableObject>
@property(copy, nonatomic) NSData *mapKitHandle;
@property(copy, nonatomic) NSString *routeType;
@property(copy, nonatomic) NSString *geoURLString;
@property(copy, nonatomic) NSString *abURLString;
@property(copy, nonatomic) NSNumber *radiusNumber;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *address;
@end

