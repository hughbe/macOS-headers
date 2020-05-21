//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;
@protocol EFSQLExpressable, EFSQLInsertStatementValue, EFSQLUpdateStatementValue;

@interface EFSQLUpsertStatement : NSObject
{
    EFSQLInsertStatement *_insertStatement;
    EFSQLUpdateStatement *_updateStatement;
    NSArray *_conflictTarget;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *conflictTarget; // @synthesize conflictTarget=_conflictTarget;
@property(readonly, nonatomic) EFSQLUpdateStatement *updateStatement; // @synthesize updateStatement=_updateStatement;
@property(readonly, nonatomic) EFSQLInsertStatement *insertStatement; // @synthesize insertStatement=_insertStatement;
- (id)excludedColumnExpressionForColumnName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *queryString;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)enumerateBindingNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(retain, nonatomic) id <EFSQLExpressable> whereClause;
@property(readonly, nonatomic) id <EFSQLUpdateStatementValue> updateValue;
@property(readonly, nonatomic) id <EFSQLInsertStatementValue> insertValue;
- (id)initWithTable:(id)arg1 conflictTarget:(id)arg2;

@end

