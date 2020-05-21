//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTMatchingElementIterator-Protocol.h>

@class NSMutableSet, NSSet, NSString, XCElementSnapshot, XCTElementIndexingTransformer;
@protocol XCTElementSetTransformer;

__attribute__((visibility("hidden")))
@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>
{
    BOOL _hasMatched;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    XCTElementIndexingTransformer *_indexingTransformer;
    unsigned long long _count;
    NSMutableSet *_mutableRelatedElements;
}

- (void).cxx_destruct;
@property(readonly) NSMutableSet *mutableRelatedElements; // @synthesize mutableRelatedElements=_mutableRelatedElements;
@property(readonly) BOOL hasMatched; // @synthesize hasMatched=_hasMatched;
@property unsigned long long count; // @synthesize count=_count;
@property(readonly) XCTElementIndexingTransformer *indexingTransformer; // @synthesize indexingTransformer=_indexingTransformer;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(retain) XCElementSnapshot *input; // @synthesize input=_input;
@property(readonly) NSSet *currentRelatedElements;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

