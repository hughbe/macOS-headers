//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBFileProperty, _INPBIntentMetadata, _INPBString;

@protocol _INPBMoveFileIntent <NSObject>
+ (Class)propertiesType;
+ (Class)entityNameType;
@property(nonatomic) BOOL hasSourceType;
@property(nonatomic) int sourceType;
@property(readonly, nonatomic) BOOL hasSourceName;
@property(retain, nonatomic) _INPBString *sourceName;
@property(readonly, nonatomic) unsigned long long propertiesCount;
@property(copy, nonatomic) NSArray *properties;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entityTypesCount;
@property(readonly, nonatomic) int *entityTypes;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
@property(copy, nonatomic) NSArray *entityNames;
@property(nonatomic) BOOL hasDestinationType;
@property(nonatomic) int destinationType;
@property(readonly, nonatomic) BOOL hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsSourceType:(NSString *)arg1;
- (NSString *)sourceTypeAsString:(int)arg1;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (void)clearProperties;
- (int)StringAsEntityTypes:(NSString *)arg1;
- (NSString *)entityTypesAsString:(int)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityTypes;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)clearEntityNames;
- (int)StringAsDestinationType:(NSString *)arg1;
- (NSString *)destinationTypeAsString:(int)arg1;
@end

