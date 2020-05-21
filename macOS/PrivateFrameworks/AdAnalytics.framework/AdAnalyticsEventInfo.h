//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdAnalytics/NSCopying-Protocol.h>
#import <AdAnalytics/NSSecureCoding-Protocol.h>

@class NSString;

@interface AdAnalyticsEventInfo : NSObject <NSSecureCoding, NSCopying>
{
    float _volume;
    NSString *_bundleID;
    NSString *_adID;
    long long _videoState;
    double _currentPlaybackTime;
    double _totalDuration;
    double _visiblePercentage;
    double _timestamp;
    long long _sequenceNumber;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) long long videoState; // @synthesize videoState=_videoState;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

