//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface ASKDefaultEntry : NSObject
{
    NSString *_name;
    NSObject *_value;
    NSUserDefaults *_userDefaults;
}

- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 andValue:(id)arg2 forUserDefaults:(id)arg3;
- (id)init;

@end

