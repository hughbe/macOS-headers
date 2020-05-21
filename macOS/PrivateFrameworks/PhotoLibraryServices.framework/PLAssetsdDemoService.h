//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdDemoServiceProtocol-Protocol.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

- (void).cxx_destruct;
- (void)hasCompletedMomentAnalysisWithReply:(CDUnknownBlockType)arg1;
- (void)hasCompletedRestorePostProcessingWithReply:(CDUnknownBlockType)arg1;
- (void)cleanupForStoreDemoMode;
- (id)initWithConnectionAuthorization:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

