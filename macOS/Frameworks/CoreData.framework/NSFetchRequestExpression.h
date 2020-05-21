//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

@interface NSFetchRequestExpression : NSExpression
{
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags {
        unsigned int isCountOnly:1;
        unsigned int _RESERVED:31;
    } _flags;
}

+ (BOOL)supportsSecureCoding;
+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;
- (id)_keypathsForDerivedPropertyValidation:(id *)arg1;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)expressionType;
- (id)description;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, getter=isCountOnlyRequest) BOOL countOnlyRequest;
@property(readonly) NSExpression *contextExpression;
@property(readonly) NSExpression *requestExpression;
- (void)dealloc;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;

@end

