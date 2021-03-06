//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPolicy/TBAnalyticsEvent-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent>
{
    unsigned long long _type;
    unsigned long long _source;
    unsigned long long _action;
    NSString *_bssid;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_score;
    NSNumber *_visibleDuration;
}

+ (id)joinAlertEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 visibleDuration:(id)arg3;
+ (id)joinRecommendationEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 BSSID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 score:(id)arg6 visibleDuration:(id)arg7;
- (void).cxx_destruct;
@property(nonatomic) NSNumber *visibleDuration; // @synthesize visibleDuration=_visibleDuration;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSDictionary *eventDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

