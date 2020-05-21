//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (void)initialize;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getPageTextsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPageTextsWithPDFKit:(CDUnknownBlockType)arg1;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;

@end

