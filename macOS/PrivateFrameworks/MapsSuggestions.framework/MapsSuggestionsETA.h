//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>
#import <MapsSuggestions/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSString;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying>
{
    int _transportType;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
    NSDate *_time;
    CLLocation *_location;
    NSString *_originator;
}

+ (id)ETAWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(readonly, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(readonly, nonatomic) double seconds; // @synthesize seconds=_seconds;
- (id)description;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isBetterThanETA:(id)arg1 requirements:(id)arg2;
- (BOOL)isValidForLocation:(id)arg1 requirements:(id)arg2;
- (id)trafficString;
@property(readonly, nonatomic) double age;
- (BOOL)isEqualToETA:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6 originator:(id)arg7;

@end

