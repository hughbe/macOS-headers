//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject
{
    NSArray *_algorithms;
}

- (void).cxx_destruct;
- (BOOL)supportsAlgorithm:(struct __CFString *)arg1;
- (BOOL)isAlgorithm:(struct __CFString *)arg1;
- (id)initWithAlgorithmsArray:(id)arg1;

@end

