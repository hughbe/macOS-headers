//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSString, PTDomainInfo, PTProxySettingsDefinition, PTTestRecipeInfo;

@protocol PTDomainServer <NSObject>
- (void)registerRootSettingsProxyDefinition:(PTProxySettingsDefinition *)arg1 forDomainID:(NSString *)arg2;
- (void)registerTestRecipeWithInfo:(PTTestRecipeInfo *)arg1;
- (void)registerDomainWithInfo:(PTDomainInfo *)arg1;
@end

