//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMPresenceEventActivation : NSObject
{
    unsigned long long _value;
}

+ (id)activationGranularityWithCoder:(id)arg1;
+ (id)activationGranularityWithDict:(id)arg1;
+ (id)activationGranularityWithMessage:(id)arg1;
+ (id)activationGranularityWithNumber:(id)arg1;
+ (id)activationGranularityWithValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

