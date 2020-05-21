//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TIMobileAssetSyncState : NSObject
{
    BOOL _loadedState;
    long long _status;
    NSDate *_date;
    NSString *_buildVersion;
    long long _attemptCount;
}

+ (id)buildVersionString;
- (void).cxx_destruct;
@property(nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)didSyncToRemoteMetadataWithError:(id)arg1;
- (BOOL)shouldSyncToRemoteMetadata;
- (void)updateState;
- (void)saveState;
- (void)loadStateIfNecessary;
- (id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4;

@end

