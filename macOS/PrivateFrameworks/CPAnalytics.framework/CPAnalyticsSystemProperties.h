//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject
{
    NSMutableDictionary *_systemProperties;
    NSMutableDictionary *_dynamicProperties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dynamicProperties; // @synthesize dynamicProperties=_dynamicProperties;
@property(retain, nonatomic) NSMutableDictionary *systemProperties; // @synthesize systemProperties=_systemProperties;
- (id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)init;

@end

