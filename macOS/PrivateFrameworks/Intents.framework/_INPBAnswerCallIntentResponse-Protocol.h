//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBCallRecordValue;

@protocol _INPBAnswerCallIntentResponse <NSObject>
+ (Class)callRecordsType;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode;
@property(readonly, nonatomic) unsigned long long callRecordsCount;
@property(copy, nonatomic) NSArray *callRecords;
- (int)StringAsStatusCode:(NSString *)arg1;
- (NSString *)statusCodeAsString:(int)arg1;
- (_INPBCallRecordValue *)callRecordsAtIndex:(unsigned long long)arg1;
- (void)addCallRecords:(_INPBCallRecordValue *)arg1;
- (void)clearCallRecords;
@end

