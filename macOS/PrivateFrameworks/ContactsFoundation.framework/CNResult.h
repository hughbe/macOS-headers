//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNEither, NSError;

@interface CNResult : NSObject
{
    CNEither *_either;
}

+ (id)failureWithError:(id)arg1;
+ (id)successWithValue:(id)arg1;
+ (id)resultWithFuture:(id)arg1;
+ (id)resultWithBlock:(CDUnknownBlockType)arg1;
+ (id)resultWithValue:(id)arg1 orError:(id)arg2;
- (void).cxx_destruct;
@property(readonly) CNEither *either; // @synthesize either=_either;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)valueWithError:(id *)arg1;
@property(readonly) BOOL isFailure;
@property(readonly) BOOL isSuccess;
@property(readonly, copy) NSError *error;
@property(readonly) id value;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 error:(id)arg2;

@end

