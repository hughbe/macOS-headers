//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPDRemoteSecretValidationResult, NSDictionary;

@protocol CDPDBackupRecoveryResultsParser <NSObject>
- (NSDictionary *)resultsDictionaryFromRecoveryResult:(CDPDRemoteSecretValidationResult *)arg1 error:(id *)arg2;
@end

