//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKKnowledgeStore;

@interface SGAppLaunchHistory : NSObject
{
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (unsigned long long)launchCountForBundleId:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)init;

@end

