//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryPrologItemBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemDefaultCollation : NSObject <XQueryPrologItemBehavior>
{
    NSString *collation;
    long long line;
}

+ (id)collation:(id)arg1 atLine:(long long)arg2;
- (void)finalize;
- (void)dealloc;
- (void)XQueryUpdateProlog:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

