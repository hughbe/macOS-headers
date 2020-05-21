//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class AMSSQLitePredicate, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQueryDescriptor : NSObject <NSCopying>
{
    Class _entityClass;
    long long _limitCount;
    Class _memoryEntityClass;
    NSString *_orderingClause;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    AMSSQLitePredicate *_predicate;
    BOOL _returnsDistinctEntities;
}

- (void).cxx_destruct;
@property(copy, nonatomic) AMSSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(copy, nonatomic) NSArray *orderingDirections; // @synthesize orderingDirections=_orderingDirections;
@property(copy, nonatomic) NSString *orderingClause; // @synthesize orderingClause=_orderingClause;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class memoryEntityClass; // @synthesize memoryEntityClass=_memoryEntityClass;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

