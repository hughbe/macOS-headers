//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOKit/HIDServiceClient.h>

@interface HIDServiceClient (HIDFramework)
@property(readonly) unsigned long long serviceID;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;
- (id)eventMatching:(id)arg1;
- (BOOL)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertiesForKeys:(id)arg1;
- (id)propertyForKey:(id)arg1;
@end

