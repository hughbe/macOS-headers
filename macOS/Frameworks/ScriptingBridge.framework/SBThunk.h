//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSString;

__attribute__((visibility("hidden")))
@interface SBThunk : NSObject
{
    NSString *_selector;
    NSMethodSignature *_signature;
}

+ (id)thunksForElement:(id)arg1 inDocument:(id)arg2;
+ (id)thunkWithElement:(id)arg1 inDocument:(id)arg2;
- (id)description;
- (void)invoke:(id)arg1;
- (id)signature;
- (id)selector;
- (BOOL)isEqual:(id)arg1;
- (id)initWithElement:(id)arg1 inDocument:(id)arg2;

@end

