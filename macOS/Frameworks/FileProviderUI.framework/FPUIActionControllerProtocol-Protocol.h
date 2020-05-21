//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol FPUIActionControllerProtocol <NSObject>
+ (id)actionControllerForActionIdentifier:(NSString *)arg1 actionTitle:(NSString *)arg2 items:(NSArray *)arg3 providerIdentifier:(NSString *)arg4 domainIdentifier:(NSString *)arg5;
@property(readonly, nonatomic) NSString *domainIdentifier;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSString *actionIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier;
@end

