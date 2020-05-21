//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class NSMutableDictionary, PTProxySettingsDefinition;

@interface PTProxySettings : PTSettings
{
    NSMutableDictionary *_values;
    PTProxySettingsDefinition *_definition;
}

+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (id)new;
+ (id)settingsOrProxyWithDefinition:(id)arg1;
+ (id)proxyWithDefinition:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PTProxySettingsDefinition *definition; // @synthesize definition=_definition;
- (id)initWithDefaultValues;
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)_createChildForKey:(id)arg1;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)restoreDefaultValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)module;
- (id)_initWithDefinition:(id)arg1;

@end

