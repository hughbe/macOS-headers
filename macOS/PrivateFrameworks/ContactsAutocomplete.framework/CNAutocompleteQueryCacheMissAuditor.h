//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteQueryCacheMissLogger, NSArray;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject
{
    CNAutocompleteQueryCacheMissLogger *_logger;
    NSArray *_cachedResults;
}

- (void).cxx_destruct;
@property(copy) NSArray *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain) CNAutocompleteQueryCacheMissLogger *logger; // @synthesize logger=_logger;
- (void)didReturnLiveResults:(id)arg1;
- (void)didReturnCachedResults:(id)arg1;
- (id)description;
- (id)initWithLogger:(id)arg1;
- (id)init;

@end

