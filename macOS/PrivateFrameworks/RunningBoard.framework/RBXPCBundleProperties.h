//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBBundleProperties-Protocol.h>

@class NSCache, NSDictionary, NSString, NSURL;

@interface RBXPCBundleProperties : NSObject <RBBundleProperties>
{
    int _pid;
    NSCache *_plistValues;
    BOOL _canFetchBundle;
    BOOL _backgroundRefreshEnabled;
    BOOL _hasPreferredJetsamBand;
    BOOL _supportsBackgroundContentFetching;
    BOOL _supportsBackgroundNetworkAuthentication;
    BOOL _supportsBackgroundAudio;
    BOOL _supportsUnboundedTaskCompletion;
    BOOL _usesSocketMonitoring;
    BOOL _isExtension;
    int _preferredJetsamBand;
    NSString *_identifier;
    NSString *_path;
    NSString *_executablePath;
    NSString *_extensionPointIdentifier;
    NSURL *_dataContainerURL;
    NSDictionary *_environmentVariables;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isExtension; // @synthesize isExtension=_isExtension;
@property(readonly, nonatomic) BOOL usesSocketMonitoring; // @synthesize usesSocketMonitoring=_usesSocketMonitoring;
@property(readonly, nonatomic) BOOL supportsUnboundedTaskCompletion; // @synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion;
@property(readonly, nonatomic) BOOL supportsBackgroundAudio; // @synthesize supportsBackgroundAudio=_supportsBackgroundAudio;
@property(readonly, nonatomic) BOOL supportsBackgroundNetworkAuthentication; // @synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication;
@property(readonly, nonatomic) BOOL supportsBackgroundContentFetching; // @synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching;
@property(readonly, nonatomic) int preferredJetsamBand; // @synthesize preferredJetsamBand=_preferredJetsamBand;
@property(readonly, nonatomic) BOOL hasPreferredJetsamBand; // @synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand;
@property(readonly, nonatomic) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, nonatomic, getter=isBackgroundRefreshEnabled) BOOL backgroundRefreshEnabled; // @synthesize backgroundRefreshEnabled=_backgroundRefreshEnabled;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)initWithPID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

