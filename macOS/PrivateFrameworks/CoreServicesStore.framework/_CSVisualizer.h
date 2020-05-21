//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject
{
    NSMutableDictionary *_handlers;
    NSRecursiveLock *_lock;
    const struct __CSStore *_store;
    NSMutableDictionary *_userInfo;
}

+ (BOOL)getUnit:(unsigned int *)arg1 inTable:(unsigned int *)arg2 fromURL:(id)arg3;
+ (id)URLForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
+ (BOOL)unitDescription:(id)arg1 referencesUnit:(unsigned int)arg2 inTable:(unsigned int)arg3;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)breakDownTable:(const struct Table *)arg1 inStore:(const struct Store *)arg2 buffer:(char *)arg3;
+ (id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id *)arg2;
+ (void)enumerateValuesForTitlesInDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (struct _NSRange)rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2;
+ (id)new;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) const struct __CSStore *store; // @synthesize store=_store;
- (void)enumerateReferencesToUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (id)breakDownUsage;
- (id)iconForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (id)descriptionOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (id)summaryOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)setStandardTableHandlers;
- (void)setHandler:(CDUnknownBlockType)arg1 forTable:(unsigned int)arg2;
- (CDUnknownBlockType)handlerForTable:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithStore:(struct __CSStore *)arg1 useStandardTableHandlers:(BOOL)arg2;
- (id)initWithStore:(struct __CSStore *)arg1;
- (id)init;

@end

