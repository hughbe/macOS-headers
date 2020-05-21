//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, RTLocation, RTMapItem;

@interface RTPlaceInference : NSObject <NSSecureCoding>
{
    RTLocation *_referenceLocation;
    RTMapItem *_mapItem;
    unsigned long long _userType;
    unsigned long long _placeType;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) RTLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (id)description;
- (id)nameFromUserType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *preferredName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 placeType:(unsigned long long)arg3 referenceLocation:(id)arg4 confidence:(double)arg5;
- (id)init;

@end

