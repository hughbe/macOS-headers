//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistorySession.h>

@class NSArray;

@interface WBSHistorySessionWithItems : WBSHistorySession
{
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)initWithSessionStartDate:(id)arg1 items:(id)arg2;
- (id)initWithSessionStartDate:(id)arg1;
- (id)init;

@end

