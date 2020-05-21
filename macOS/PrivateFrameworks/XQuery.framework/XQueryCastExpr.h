//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString, XQueryTypeDeclaration;

__attribute__((visibility("hidden")))
@interface XQueryCastExpr : XQueryExpr <XQueryExprBehavior>
{
    id _expr;
    XQueryTypeDeclaration *_type;
}

+ (id)castObject:(id)arg1 asType:(long long)arg2 forContext:(id)arg3 allowEmpty:(BOOL)arg4;
+ (id)castExpr:(id)arg1 asType:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithExpr:(id)arg1 type:(id)arg2;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

