//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol IDSAccountRegistrationDelegate <NSObject>

@optional
- (void)refreshRegistrationForAccount:(NSString *)arg1;
- (void)account:(NSString *)arg1 displayNameChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 loginChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 profileChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 vettedAliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 aliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 registrationStatusInfoChanged:(NSDictionary *)arg2;
@end

