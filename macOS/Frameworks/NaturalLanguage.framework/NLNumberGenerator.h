//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLNumberGenerator : NSObject
{
    unsigned long long state[2];
}

- (unsigned long long)numberInRange:(struct _NSRange)arg1;
- (void)resetWithSeed:(unsigned long long)arg1;
- (void)reset;
- (id)init;

@end

