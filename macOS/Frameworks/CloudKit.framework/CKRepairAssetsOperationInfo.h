//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKUploadRequestConfiguration, NSArray;

@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    NSArray *_assets;
    NSArray *_packages;
    NSArray *_assetMetadata;
    NSArray *_packageMetadata;
    NSArray *_unavailableAssets;
    NSArray *_unavailablePackages;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *unavailablePackages; // @synthesize unavailablePackages=_unavailablePackages;
@property(retain, nonatomic) NSArray *unavailableAssets; // @synthesize unavailableAssets=_unavailableAssets;
@property(retain, nonatomic) NSArray *packageMetadata; // @synthesize packageMetadata=_packageMetadata;
@property(retain, nonatomic) NSArray *assetMetadata; // @synthesize assetMetadata=_assetMetadata;
@property(retain, nonatomic) NSArray *packages; // @synthesize packages=_packages;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

