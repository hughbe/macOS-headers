//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryPrologItemBehavior-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemSchemaImportDefaultElement : NSObject <XQueryPrologItemBehavior>
{
    NSString *namespaceString;
    NSArray *locations;
    long long line;
}

+ (id)defaultElement:(id)arg1 atLocations:(id)arg2 atLine:(long long)arg3;
- (void)finalize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

