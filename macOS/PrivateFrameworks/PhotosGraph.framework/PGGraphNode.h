//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MANode.h>

@class NSDateComponents;

@interface PGGraphNode : MANode
{
}

+ (id)sortEventsByDateSortDescriptors;
+ (id)addressNodesFromEventNodes:(id)arg1;
+ (id)_specialDateComponentsForDate:(id)arg1;
+ (double)specialDateTimeIntervalForDateComponents:(id)arg1;
+ (id)_specialDateDateComponentsFromTimeInterval:(double)arg1;
+ (double)specialDateTimeIntervalForDate:(id)arg1;
+ (unsigned long long)partOfDayForPartOfDayNode:(id)arg1;
+ (id)stringValueForPartOfDay:(unsigned long long)arg1;
- (id)keywordDescription;
- (id)_stringValueForPropertyWithKey:(id)arg1;
- (id)UUID;
- (id)name;
- (BOOL)isFrequentSocialGroup;
- (id)nameAsSocialGroupNode;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(char *)arg4 block:(CDUnknownBlockType)arg5;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(char *)arg5 block:(CDUnknownBlockType)arg6;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3;
- (id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3;
- (id)matchingDescription;
- (BOOL)isSmartInteresting;
- (BOOL)isInteresting;
- (void)_enumeratePartOfDayWithThreshold:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_partOfDayWithThreshold:(float)arg1;
- (void)enumerateSignificantPartsOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePartOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)significantPartsOfDay;
- (unsigned long long)partOfDay;
- (struct CLLocationCoordinate2D)bestLocationCoordinate;
- (id)bestAddressNode;
- (id)nextEvent;
- (id)previousEvent;
- (unsigned long long)totalNumberOfPersons;
- (unsigned long long)numberOfAssets;
- (double)timestampTZEnd;
- (double)timestampTZStart;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (double)graphScore;
@property(retain, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(retain, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property(retain, nonatomic) NSDateComponents *birthdayDateComponents;
- (long long)timeValue;

@end

