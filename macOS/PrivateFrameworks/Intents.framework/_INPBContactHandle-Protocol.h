//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBContactHandle <NSObject>
@property(readonly, nonatomic) BOOL hasValue;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasLabel;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) BOOL hasEmergencyType;
@property(nonatomic) int emergencyType;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (int)StringAsEmergencyType:(NSString *)arg1;
- (NSString *)emergencyTypeAsString:(int)arg1;
@end

