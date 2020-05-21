//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class NSString, _ML3MultiUserDaemonAccountChangeOperation;

@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate <NSObject>
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(_ML3MultiUserDaemonAccountChangeOperation *)arg1 newDatabasePath:(NSString *)arg2;
- (NSString *)databasePathForDSID:(NSString *)arg1;
- (BOOL)shouldExecuteAccountChangeOperation:(_ML3MultiUserDaemonAccountChangeOperation *)arg1 reason:(id *)arg2;
@end

