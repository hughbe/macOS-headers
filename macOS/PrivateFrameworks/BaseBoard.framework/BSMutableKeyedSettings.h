//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSKeyedSettings.h>

@interface BSMutableKeyedSettings : BSKeyedSettings
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllSettings;
- (void)applySettings:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setFlag:(long long)arg1 forKey:(id)arg2;

@end

