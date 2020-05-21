//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext
{
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

@property(readonly, nonatomic) NSSQLModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSDictionary *entitiesAndCounts; // @synthesize entitiesAndCounts=_entitiesAndCounts;
- (BOOL)executeRequestCore:(id *)arg1;
- (BOOL)isWritingRequest;
- (void)dealloc;
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

