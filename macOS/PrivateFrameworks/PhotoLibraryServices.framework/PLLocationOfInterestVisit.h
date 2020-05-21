//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSUUID, PLLocationOfInterest;

@interface PLLocationOfInterestVisit : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSDateInterval *_visitInterval;
    double _confidence;
    PLLocationOfInterest *_locationOfInterest;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak PLLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSDateInterval *visitInterval; // @synthesize visitInterval=_visitInterval;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3;

@end

