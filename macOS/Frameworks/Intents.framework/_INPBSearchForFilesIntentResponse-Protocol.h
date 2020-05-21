//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBSearchForFilesIntentResponse <NSObject>
+ (Class)entitiesType;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(readonly, nonatomic) BOOL hasQuery;
@property(retain, nonatomic) _INPBString *query;
@property(readonly, nonatomic) BOOL hasNumResults;
@property(retain, nonatomic) _INPBInteger *numResults;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
@end

