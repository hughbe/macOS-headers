//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKContentProvider-Protocol.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

