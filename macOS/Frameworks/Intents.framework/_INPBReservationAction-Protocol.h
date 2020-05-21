//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBUserActivity;

@protocol _INPBReservationAction <NSObject>
@property(readonly, nonatomic) BOOL hasValidDuration;
@property(retain, nonatomic) _INPBDateTimeRange *validDuration;
@property(readonly, nonatomic) BOOL hasUserActivity;
@property(retain, nonatomic) _INPBUserActivity *userActivity;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

