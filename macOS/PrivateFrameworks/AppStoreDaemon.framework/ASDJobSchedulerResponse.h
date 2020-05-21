//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    NSArray *_bucketNames;
    NSArray *_currentItems;
    NSArray *_hardFailureItems;
    long long _maxItemCount;
    NSArray *_nextItems;
    NSArray *_skippedItems;
    NSArray *_softFailureItems;
}

- (void).cxx_destruct;
@property(copy) NSArray *softFailureItems; // @synthesize softFailureItems=_softFailureItems;
@property(copy) NSArray *skippedItems; // @synthesize skippedItems=_skippedItems;
@property(copy) NSArray *nextItems; // @synthesize nextItems=_nextItems;
@property(nonatomic) long long maxItemCount; // @synthesize maxItemCount=_maxItemCount;
@property(copy) NSArray *hardFailureItems; // @synthesize hardFailureItems=_hardFailureItems;
@property(readonly) NSArray *currentItems; // @synthesize currentItems=_currentItems;
@property(copy) NSArray *bucketNames; // @synthesize bucketNames=_bucketNames;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

