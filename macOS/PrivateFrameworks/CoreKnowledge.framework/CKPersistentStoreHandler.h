//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CKPersistentStoreHandler : NSObject
{
    MISSING_TYPE *connection;
}

+ (id)inMemoryHandler;
- (void).cxx_destruct;
- (BOOL)dropLinksBetween:(id)arg1 and:(id)arg2 error:(id *)arg3;
- (BOOL)dropLinksWithLabel:(id)arg1 from:(id)arg2 error:(id *)arg3;
- (BOOL)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 error:(id *)arg4;
- (long long)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (long long)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (BOOL)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 error:(id *)arg5;
- (id)tripleComponentsMatching:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllValuesAndReturnError:(id *)arg1;
- (BOOL)removeValuesMatching:(id)arg1 error:(id *)arg2;
- (BOOL)removeValuesForKeys:(id)arg1 error:(id *)arg2;
- (BOOL)removeValueForKey:(id)arg1 error:(id *)arg2;
- (BOOL)saveKeysAndValues:(id)arg1 error:(id *)arg2;
- (id)_valuesForKeys:(id)arg1 error:(id *)arg2;
- (id)keysAndValuesForKeysMatching:(id)arg1 error:(id *)arg2;
- (id)keysAndValuesAndReturnError:(id *)arg1;
- (id)valuesForKeysMatching:(id)arg1 error:(id *)arg2;
- (id)valuesAndReturnError:(id *)arg1;
- (id)keysMatching:(id)arg1 error:(id *)arg2;
- (id)keysAndReturnError:(id *)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

