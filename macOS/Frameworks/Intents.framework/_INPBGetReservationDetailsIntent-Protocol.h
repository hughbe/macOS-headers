//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBGetReservationDetailsIntent <NSObject>
+ (Class)reservationItemReferencesType;
@property(readonly, nonatomic) unsigned long long reservationItemReferencesCount;
@property(copy, nonatomic) NSArray *reservationItemReferences;
@property(readonly, nonatomic) BOOL hasReservationContainerReference;
@property(retain, nonatomic) _INPBDataString *reservationContainerReference;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBDataString *)reservationItemReferencesAtIndex:(unsigned long long)arg1;
- (void)addReservationItemReferences:(_INPBDataString *)arg1;
- (void)clearReservationItemReferences;
@end

