//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <NSObject>
+ (Class)suggestedValuesType;
@property(readonly, nonatomic) unsigned long long suggestedValuesCount;
@property(copy, nonatomic) NSArray *suggestedValues;
@property(nonatomic) BOOL hasMobileSpace;
@property(nonatomic) int mobileSpace;
@property(readonly, nonatomic) BOOL hasLocation;
@property(retain, nonatomic) _INPBLocationValue *location;
@property(nonatomic) BOOL hasEvent;
@property(nonatomic) int event;
- (_INPBLocationValue *)suggestedValuesAtIndex:(unsigned long long)arg1;
- (void)addSuggestedValues:(_INPBLocationValue *)arg1;
- (void)clearSuggestedValues;
- (int)StringAsMobileSpace:(NSString *)arg1;
- (NSString *)mobileSpaceAsString:(int)arg1;
- (int)StringAsEvent:(NSString *)arg1;
- (NSString *)eventAsString:(int)arg1;
@end

