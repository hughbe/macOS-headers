//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString, XQueryQName;

__attribute__((visibility("hidden")))
@interface XQueryVariable : XQueryExpr <XQueryExprBehavior>
{
    NSString *_name;
    XQueryQName *_qName;
    long long _varID;
}

+ (id)variableWithName:(id)arg1;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (long long)varID;
- (id)initWithName:(id)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

