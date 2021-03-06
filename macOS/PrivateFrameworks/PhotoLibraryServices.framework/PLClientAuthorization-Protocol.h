//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSString;

@protocol PLClientAuthorization <NSObject>
@property(readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property(readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
@property(readonly, nonatomic) BOOL photoKitEntitled;
@property(readonly, nonatomic) int clientProcessIdentifier;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName;
@property(readonly, nonatomic) NSString *trustedCallerBundleID;
- (BOOL)photoKitEntitledFor:(NSString *)arg1;
@end

