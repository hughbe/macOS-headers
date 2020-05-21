//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PodcastServices/PODFeedHandlingSettingsProtocol-Protocol.h>
#import <PodcastServices/PODSecureCoding-Protocol.h>
#import <PodcastServices/PODSyncSettingsProtocol-Protocol.h>

@class NSString;

@interface PODLibrarySettings : NSObject <PODSecureCoding, PODFeedHandlingSettingsProtocol, PODSyncSettingsProtocol>
{
    BOOL _syncSubscriptions;
    long long _downloadAction;
    long long _limitRule;
    long long _removePlayedRule;
    double _refreshInterval;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) long long removePlayedRule; // @synthesize removePlayedRule=_removePlayedRule;
@property(readonly, nonatomic) BOOL syncSubscriptions; // @synthesize syncSubscriptions=_syncSubscriptions;
@property(readonly, nonatomic) long long limitRule; // @synthesize limitRule=_limitRule;
@property(readonly, nonatomic) long long downloadAction; // @synthesize downloadAction=_downloadAction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFeedHandlingSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

