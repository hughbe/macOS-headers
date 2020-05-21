//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INReservation.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding>
{
    CLPlacemark *_lodgingBusinessLocation;
    INDateComponentsRange *_reservationDuration;
    NSNumber *_numberOfAdults;
    NSNumber *_numberOfChildren;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSNumber *numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(readonly, copy) NSNumber *numberOfAdults; // @synthesize numberOfAdults=_numberOfAdults;
@property(readonly, copy) INDateComponentsRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
@property(readonly, copy) CLPlacemark *lodgingBusinessLocation; // @synthesize lodgingBusinessLocation=_lodgingBusinessLocation;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10;

@end

