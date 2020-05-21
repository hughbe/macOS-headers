//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLChangePublisher-Protocol.h>

@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher>
{
    PLAssetsdClient *_assetsdClient;
}

- (void).cxx_destruct;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (id)initWithAssetsdClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

