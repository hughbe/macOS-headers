//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (void)reset;
- (void)synchronize;
- (double)serverTimeoutInterval;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

