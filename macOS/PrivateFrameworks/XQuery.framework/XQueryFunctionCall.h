//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString, NSValue, XQueryArgs, XQueryFunctionDecl;

__attribute__((visibility("hidden")))
@interface XQueryFunctionCall : XQueryExpr <XQueryExprBehavior>
{
    NSString *_name;
    XQueryArgs *_args;
    NSValue *_function;
    XQueryFunctionDecl *_functionDecl;
}

+ (id)functionCallWithName:(id)arg1 withArgs:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithName:(id)arg1 args:(id)arg2;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

