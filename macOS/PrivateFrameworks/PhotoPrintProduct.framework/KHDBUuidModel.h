//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHDBModel.h>

@class NSString;

@interface KHDBUuidModel : KHDBModel
{
    NSString *_uuid;
}

+ (id)modelUuidsFromQuery:(id)arg1;
+ (id)modelUuidsWhere:(id)arg1;
+ (id)modelUuidsFromDatabase:(id)arg1 where:(id)arg2;
+ (id)modelUuidsFromDatabase:(id)arg1 where:(id)arg2 args:(id)arg3;
+ (id)uuidsForModels:(id)arg1;
+ (id)uuidsForModelIds:(id)arg1;
+ (id)uuidsForModelIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)modelIdListForUuids:(id)arg1;
+ (id)modelIdListForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)modelIdsForUuids:(id)arg1;
+ (id)modelIdsForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)modelIdForUuid:(id)arg1;
+ (id)modelIdForUuid:(id)arg1 fromDatabase:(id)arg2;
+ (id)orderedModelsForUuids:(id)arg1;
+ (id)orderedModelsForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)modelsForUuids:(id)arg1;
+ (id)modelsForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)modelForUuid:(id)arg1;
+ (id)modelForUuid:(id)arg1 fromDatabase:(id)arg2;
- (void)persist;
- (id)infoDictionaryPath;
- (id)infoDictionary;
- (void)cacheUuid:(id)arg1;
- (id)uuid;
- (id)description;
- (void)dealloc;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)initWithUuid:(id)arg1 forEntity:(id)arg2;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 inDatabase:(id)arg3;

@end

