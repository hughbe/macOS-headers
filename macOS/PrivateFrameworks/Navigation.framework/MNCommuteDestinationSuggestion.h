//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOComposedWaypoint, NSData, NSDate, NSString;

@interface MNCommuteDestinationSuggestion : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allDay;
    NSData *_rawSuggestion;
    NSString *_uniqueIdentifier;
    unsigned long long _type;
    NSString *_name;
    GEOComposedWaypoint *_waypoint;
    double _weight;
    NSDate *_expires;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)fakeDestinationSuggestions;
+ (void)fakeDestinationSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fakeDestinationSuggestion:(id)arg1;
+ (id)_fakeBitsAndPiecesForSuggestion:(id)arg1;
+ (void)_setupFakes;
- (void).cxx_destruct;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) GEOComposedWaypoint *waypoint; // @synthesize waypoint=_waypoint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSData *rawSuggestion; // @synthesize rawSuggestion=_rawSuggestion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

