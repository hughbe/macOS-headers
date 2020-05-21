//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>
#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUAirport, FUStepTime, NSNumber, NSString;

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_delayFromSchedule;
    BOOL _departure;
    FUAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
    long long _legStatus;
    FUStepTime *_scheduledTime;
    FUStepTime *_estimatedTime;
    FUStepTime *_actualTime;
    FUStepTime *_runwayTime;
    FUStepTime *_plannedTime;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) FUStepTime *plannedTime; // @synthesize plannedTime=_plannedTime;
@property BOOL departure; // @synthesize departure=_departure;
@property(retain) FUStepTime *runwayTime; // @synthesize runwayTime=_runwayTime;
@property(retain) FUStepTime *actualTime; // @synthesize actualTime=_actualTime;
@property(retain) FUStepTime *estimatedTime; // @synthesize estimatedTime=_estimatedTime;
@property(retain) FUStepTime *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property long long legStatus; // @synthesize legStatus=_legStatus;
@property(retain) NSString *terminal; // @synthesize terminal=_terminal;
@property(retain) NSString *gate; // @synthesize gate=_gate;
@property(retain) FUAirport *airport; // @synthesize airport=_airport;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long status;
@property(retain, nonatomic) NSNumber *delayFromSchedule;
@property(readonly) FUStepTime *time;
@property(readonly) BOOL taxiing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

