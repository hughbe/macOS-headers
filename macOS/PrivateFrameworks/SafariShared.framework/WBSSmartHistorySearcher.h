//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface WBSSmartHistorySearcher : NSObject
{
    NSArray *_topics;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2;
- (id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithTopics:(id)arg1;

@end

