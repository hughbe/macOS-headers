//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBCallRecordValue;

@protocol _INPBSearchCallHistoryIntentResponse <NSObject>
+ (Class)callRecordsType;
@property(readonly, nonatomic) BOOL hasTargetContact;
@property(copy, nonatomic) NSString *targetContact;
@property(readonly, nonatomic) BOOL hasStatus;
@property(copy, nonatomic) NSString *status;
@property(readonly, nonatomic) BOOL hasDateCreated;
@property(copy, nonatomic) NSString *dateCreated;
@property(readonly, nonatomic) unsigned long long callRecordsCount;
@property(copy, nonatomic) NSArray *callRecords;
- (_INPBCallRecordValue *)callRecordsAtIndex:(unsigned long long)arg1;
- (void)addCallRecords:(_INPBCallRecordValue *)arg1;
- (void)clearCallRecords;
@end

