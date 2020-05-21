//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance
{
    NSString *_functionName;
    NSArray *_argumentValidators;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *argumentValidators; // @synthesize argumentValidators=_argumentValidators;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)arg1 error:(id *)arg2;
- (id)initWithFunctionName:(id)arg1 validators:(id)arg2;

@end

