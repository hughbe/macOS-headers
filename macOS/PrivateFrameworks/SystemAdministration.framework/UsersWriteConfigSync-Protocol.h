//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol UsersWriteConfigSync

@optional
- (oneway void)notifyCFPreferencesOfImpendingUserDeletion:(NSString *)arg1 authorization:(NSData *)arg2 result:(void (^)(BOOL))arg3;
@end

