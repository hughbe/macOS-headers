//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject
{
    BOOL _includeSourceColumn;
    EFSQLGeneratorTableRelationship *_tableRelationship;
    NSArray *_whereExpression;
    NSArray *_additionalSelectColumns;
    NSString *_alias;
    EFSQLExpressionGenerator *_previousExpressionGenerator;
}

+ (id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) EFSQLExpressionGenerator *previousExpressionGenerator; // @synthesize previousExpressionGenerator=_previousExpressionGenerator;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(nonatomic) BOOL includeSourceColumn; // @synthesize includeSourceColumn=_includeSourceColumn;
@property(readonly, nonatomic) NSArray *additionalSelectColumns; // @synthesize additionalSelectColumns=_additionalSelectColumns;
@property(readonly, nonatomic) NSArray *whereExpression; // @synthesize whereExpression=_whereExpression;
@property(readonly, nonatomic) EFSQLGeneratorTableRelationship *tableRelationship; // @synthesize tableRelationship=_tableRelationship;
- (unsigned long long)hash;
- (BOOL)isEqualToEFSQLExpressionGenerator:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)columnAlias;
- (id)joinOnGenerator;
- (void)assignAliasWithMap:(id)arg1;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(BOOL)arg5;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3;

@end

