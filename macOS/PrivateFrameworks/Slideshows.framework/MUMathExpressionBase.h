//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject
{
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(CDStruct_b6748e3c *)arg1;
- (id)lastError;
- (void)dealloc;
- (void)_cleanup;
- (id)init;
- (void)setLastError:(CDStruct_b6748e3c *)arg1;

@end

