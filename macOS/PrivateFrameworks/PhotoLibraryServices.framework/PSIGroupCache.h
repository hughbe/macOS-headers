//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol PSIGroupCacheDelegate;

@interface PSIGroupCache : NSObject
{
    NSMutableSet *_groups;
    id <PSIGroupCacheDelegate> _delegate;
    unsigned long long _numberOfGroupsChecked;
    unsigned long long _numberOfGroupsQueried;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long numberOfGroupsQueried; // @synthesize numberOfGroupsQueried=_numberOfGroupsQueried;
@property(readonly) unsigned long long numberOfGroupsChecked; // @synthesize numberOfGroupsChecked=_numberOfGroupsChecked;
- (unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out char *)arg5;
- (id)initWithDelegate:(id)arg1;

@end

