//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSetChange.h>

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange : NSSetChange
{
    unsigned long long _changeType;
    id _value;
}

- (id)value;
- (unsigned long long)changeType;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;

@end

