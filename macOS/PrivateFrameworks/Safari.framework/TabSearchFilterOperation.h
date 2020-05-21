//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TabSearchFilterOperation : NSOperation
{
    CDUnknownBlockType _filterCompletionCallback;
    NSString *_filterText;
    NSArray *_tabInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(readonly, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterCompletionCallback; // @synthesize filterCompletionCallback=_filterCompletionCallback;
- (void)_completeOperationWithIndexes:(id)arg1;
- (void)main;
- (id)initWithTabInfoForFilteringTabs:(id)arg1 filterText:(id)arg2 completionCallback:(CDUnknownBlockType)arg3;

@end

