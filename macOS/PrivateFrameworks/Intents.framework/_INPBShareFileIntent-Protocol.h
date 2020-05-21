//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBShareDestination, _INPBString;

@protocol _INPBShareFileIntent <NSObject>
+ (Class)recipientsType;
+ (Class)entityNameType;
@property(nonatomic) BOOL hasShareMode;
@property(nonatomic) int shareMode;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
@property(copy, nonatomic) NSArray *entityNames;
- (int)StringAsShareMode:(NSString *)arg1;
- (NSString *)shareModeAsString:(int)arg1;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)clearEntityNames;
@end

