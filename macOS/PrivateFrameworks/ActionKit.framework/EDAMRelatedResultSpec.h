//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet;

@interface EDAMRelatedResultSpec : FATObject
{
    NSNumber *_maxNotes;
    NSNumber *_maxNotebooks;
    NSNumber *_maxTags;
    NSNumber *_writableNotebooksOnly;
    NSNumber *_includeContainingNotebooks;
    NSNumber *_includeDebugInfo;
    NSNumber *_maxExperts;
    NSNumber *_maxRelatedContent;
    NSSet *_relatedContentTypes;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *relatedContentTypes; // @synthesize relatedContentTypes=_relatedContentTypes;
@property(retain, nonatomic) NSNumber *maxRelatedContent; // @synthesize maxRelatedContent=_maxRelatedContent;
@property(retain, nonatomic) NSNumber *maxExperts; // @synthesize maxExperts=_maxExperts;
@property(retain, nonatomic) NSNumber *includeDebugInfo; // @synthesize includeDebugInfo=_includeDebugInfo;
@property(retain, nonatomic) NSNumber *includeContainingNotebooks; // @synthesize includeContainingNotebooks=_includeContainingNotebooks;
@property(retain, nonatomic) NSNumber *writableNotebooksOnly; // @synthesize writableNotebooksOnly=_writableNotebooksOnly;
@property(retain, nonatomic) NSNumber *maxTags; // @synthesize maxTags=_maxTags;
@property(retain, nonatomic) NSNumber *maxNotebooks; // @synthesize maxNotebooks=_maxNotebooks;
@property(retain, nonatomic) NSNumber *maxNotes; // @synthesize maxNotes=_maxNotes;

@end

