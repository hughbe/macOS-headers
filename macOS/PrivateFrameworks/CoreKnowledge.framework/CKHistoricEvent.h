//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString;

@interface CKHistoricEvent : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *_firstSeen;
    MISSING_TYPE *_lastSeen;
    MISSING_TYPE *_frequency;
    MISSING_TYPE *_lastDuration;
    MISSING_TYPE *_totalDuration;
    MISSING_TYPE *_metadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (id)initFrom:(id)arg1 withIdentifier:(id)arg2;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) double totalDuration;
@property(nonatomic, readonly) double lastDuration;
@property(nonatomic, readonly) long long frequency;
@property(nonatomic, readonly) NSDate *lastSeen;
@property(nonatomic, readonly) NSDate *firstSeen;
@property(nonatomic, readonly) NSString *identifier;

@end

