//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLDeleteStatement : NSObject
{
    NSString *_table;
    id <EFSQLExpressable> _whereClause;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <EFSQLExpressable> whereClause; // @synthesize whereClause=_whereClause;
@property(readonly, copy, nonatomic) NSString *table; // @synthesize table=_table;
@property(readonly, copy, nonatomic) NSString *queryString;
- (id)initWithTable:(id)arg1 where:(id)arg2;
- (id)initWithTable:(id)arg1;

@end

