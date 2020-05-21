//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, NSError, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface NUJSContext : NSObject
{
    NSHashTable *_collectedProxies;
    NSMutableArray *_stateStack;
    NSMutableDictionary *_functions;
    JSContext *_jsContext;
}

+ (void)execute:(CDUnknownBlockType)arg1;
+ (BOOL)validateValuesAreNumbers:(id)arg1 error:(out id *)arg2;
+ (id)contextForContext:(id)arg1;
- (void).cxx_destruct;
@property(retain) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSError *error;
- (void)setFunction:(id)arg1 forKey:(id)arg2;
- (id)functionForKey:(id)arg1;
- (id)currentState;
- (void)popState;
- (void)pushState:(id)arg1;
- (void)resetAllProxies;
- (void)addProxy:(id)arg1;
- (void)setupBuiltInFunctions;
- (id)init;

@end

