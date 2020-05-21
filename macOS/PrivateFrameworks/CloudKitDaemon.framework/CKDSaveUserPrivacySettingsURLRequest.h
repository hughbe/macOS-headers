//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;
    long long _discoverableTrinary;
}

- (void).cxx_destruct;
@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (BOOL)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (long long)databaseScope;
- (void)setDiscoverable:(BOOL)arg1;
- (id)init;

@end

