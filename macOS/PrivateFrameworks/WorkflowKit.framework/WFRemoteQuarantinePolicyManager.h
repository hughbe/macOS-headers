//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
    NSBundle *_localPolicyBundle;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *localPolicyBundle; // @synthesize localPolicyBundle=_localPolicyBundle;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)createDirectoryForAssetWithIdentifier:(id)arg1 directoryExists:(char *)arg2 error:(id *)arg3;
- (BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)persistAssetToDisk:(id)arg1 error:(id *)arg2;
- (BOOL)processAsset:(id)arg1 error:(id *)arg2;
- (void)updatePolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)policyStringForBundleIfValid:(id)arg1;
- (id)latestRemotePolicyAssetBundle;
- (id)policyAssetBundle;
- (id)localizedString:(id)arg1;
- (id)policyString;
- (id)init;

@end

