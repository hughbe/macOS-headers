//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAKit/OSAScriptAssistantStrategy.h>

@class NSArray;

@interface OSAScriptAssistantTerminologyStrategy : OSAScriptAssistantStrategy
{
    NSArray *_terms;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_terminologyCompletionItemsForTerms:(id)arg1;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1;

@end

