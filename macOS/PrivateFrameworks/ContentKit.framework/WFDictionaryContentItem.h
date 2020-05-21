//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSDictionary;

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 contentSource:(id)arg4;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 contentSource:(id)arg3;
+ (id)itemsWithPlistFileRepresentation:(id)arg1 contentSource:(id)arg2;
+ (id)itemsWithJSONFileRepresentation:(id)arg1 contentSource:(id)arg2;
+ (id)propertyBuilders;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)preferredFileType;
@property(readonly, nonatomic) NSDictionary *dictionary;

@end

