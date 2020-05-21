//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFObjectPropertyMapper-Protocol.h>

@class EFSQLColumnSchema, EFSQLTableSchema, NSArray, NSDictionary, NSString;
@protocol EFSQLExpressable;

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper>
{
    BOOL _isPlaceholder;
    NSDictionary *_children;
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    id <EFSQLExpressable> _condition;
    NSArray *_additionalColumns;
    id <EFSQLExpressable> _bitExpression;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <EFSQLExpressable> bitExpression; // @synthesize bitExpression=_bitExpression;
@property(nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) NSArray *additionalColumns; // @synthesize additionalColumns=_additionalColumns;
@property(readonly, nonatomic) id <EFSQLExpressable> condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property(readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
@property(copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
- (id)childForKey:(id)arg1;
- (id)initPlaceholderMapperWithChildren:(id)arg1;
- (id)initWithColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 bitExpression:(id)arg4;
- (id)initWithColumn:(id)arg1 condition:(id)arg2;
- (id)initWithColumn:(id)arg1 additionalColumns:(id)arg2;
- (id)initWithColumn:(id)arg1 bitExpression:(id)arg2;
- (id)initWithColumn:(id)arg1;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 table:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithChildren:(id)arg1 table:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

