//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (IC)
+ (id)ic_urlFromWeblocFileAtURL:(id)arg1;
@property(readonly, nonatomic) BOOL ic_isURLAnInternetLocator;
@property(readonly, nonatomic) BOOL ic_isReachable;
@property(readonly, nonatomic) long long ic_fileSize;
@property(readonly, nonatomic) NSString *ic_UTI;
@property(readonly, nonatomic) BOOL ic_isSupportedAsAttachment;
@property(readonly, nonatomic) BOOL ic_isWebURL;
@property(readonly, nonatomic) BOOL ic_isAppStoreURL;
@property(readonly, nonatomic) BOOL ic_isiTunesURL;
@property(readonly, nonatomic) BOOL ic_isNewsURL;
@property(readonly, nonatomic) BOOL ic_isMapURL;
@property(readonly, nonatomic) NSURL *ic_uniquedURL;
@property(readonly, nonatomic) BOOL ic_isExcludedFromCloudBackups;
@property(readonly, nonatomic) BOOL ic_isExcludedFromNonCloudBackups;
- (void)ic_updateFlagToExcludeFromCloudBackup:(BOOL)arg1;
- (id)ic_dedupedURLWithProhibitedNames:(id)arg1;
- (id)queryComponents;
@end

