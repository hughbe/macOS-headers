//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement
{
    NSDictionary *_arguments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3 arguments:(id)arg4;

@end

