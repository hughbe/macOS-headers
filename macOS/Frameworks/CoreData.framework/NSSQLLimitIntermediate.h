//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLLimitIntermediate : NSSQLIntermediate
{
    unsigned long long _limit;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithLimit:(unsigned long long)arg1 inScope:(id)arg2;

@end

