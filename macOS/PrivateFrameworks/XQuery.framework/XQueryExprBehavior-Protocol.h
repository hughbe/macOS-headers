//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XQuery/NSObject-Protocol.h>

@class XQueryContext, XQueryProlog;

@protocol XQueryExprBehavior <NSObject>
- (id)evaluateWithContext:(XQueryContext *)arg1;
- (void)bindInfoForProlog:(XQueryProlog *)arg1;
@end

