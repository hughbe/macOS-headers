//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHError : NSObject
{
}

+ (id)recoverySuggestionForCode:(long long)arg1;
+ (id)messageForCode:(long long)arg1;
+ (BOOL)annotateClientError:(id *)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4;
+ (BOOL)annotateClientError:(id *)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;

@end

