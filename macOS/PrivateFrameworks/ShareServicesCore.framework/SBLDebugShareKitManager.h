//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareServicesCore/SBLShareKitManager.h>

@class NSMapTable;

@interface SBLDebugShareKitManager : SBLShareKitManager
{
    NSMapTable *_assetPerItemProvider;
}

- (void).cxx_destruct;
- (void)preflightItemProviders:(id)arg1;
- (void)cleanupItems:(id)arg1;
- (void)reset;
- (id)assetForItemProvider:(id)arg1;
- (id)sharingItemsForAssets:(id)arg1 allowLocation:(BOOL)arg2;

@end

