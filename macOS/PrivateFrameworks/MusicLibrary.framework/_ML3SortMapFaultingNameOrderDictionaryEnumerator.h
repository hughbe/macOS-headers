//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator
{
    NSEnumerator *_dirtyInsertsEnumerator;
    ML3DatabaseConnection *_connection;
    unsigned long long _offset;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2;

@end

