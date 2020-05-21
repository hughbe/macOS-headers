//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject
{
    int _timeLimit;
    NSString *_searchString;
    NSPredicate *_searchPredicate;
    id <DASearchQueryConsumer> _consumer;
    NSString *_searchID;
    unsigned long long _state;
    struct _NSRange _range;
}

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) __weak id <DASearchQueryConsumer> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) int timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) unsigned int maxResults;
- (id)dictionaryRepresentation;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (BOOL)isQueryRunning;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)description;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;

@end

