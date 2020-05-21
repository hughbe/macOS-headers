//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol PCSSyncingProtocol
- (NSArray *)getServicesToRoll;
- (BOOL)shouldRoll;
- (void)checkForBackupStateChange;
- (void)triggerKeyRolling;
- (void)mobileBackupStatus:(void (^)(BOOL, NSError *))arg1;
- (void)fetchStats:(void (^)(UserRegistryStats *))arg1;
- (void)restoreMobileBackup:(_Bool)arg1 withReply:(void (^)(NSNumber *, NSNumber *, NSNumber *, NSError *))arg2;
- (void)userDBBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)mobileBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)escrowRecordIDs:(NSDictionary *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)deleteThisDevice:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)triggerUserRegistryCheck:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchAllDeviceKeys:(NSDictionary *)arg1 withReply:(void (^)(NSString *, NSData *, NSData *, NSArray *, NSError *))arg2;
- (void)keyRollPending:(NSString *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)manateeStatus:(NSString *)arg1 complete:(void (^)(unsigned int))arg2;
- (void)createIdentity:(NSString *)arg1 roll:(BOOL)arg2 sync:(BOOL)arg3 complete:(void (^)(NSData *, PCSMTT *, NSError *))arg4;
- (void)triggerSyncingWithEscrowProxy:(NSString *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)triggerWatchSyncing:(void (^)(void))arg1;
- (void)triggerDaily:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)syncKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getAllClients:(void (^)(NSDictionary *, NSError *))arg1;
@end

