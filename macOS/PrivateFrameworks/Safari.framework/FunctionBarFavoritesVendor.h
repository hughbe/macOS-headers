//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FunctionBarFavoritesVending-Protocol.h>

@class CombinedFavoritesController, NSString, WebBookmarkList;
@protocol FunctionBarFavoritesClient;

__attribute__((visibility("hidden")))
@interface FunctionBarFavoritesVendor : NSObject <FunctionBarFavoritesVending>
{
    CombinedFavoritesController *_combinedFavoritesController;
    id <FunctionBarFavoritesClient> _client;
    WebBookmarkList *_vendedFolder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FunctionBarFavoritesClient> client; // @synthesize client=_client;
- (void)_favoritesDidChange:(id)arg1;
- (void)_notifyClientOfRefresh;
- (id)_defaultVendedFolder;
- (void)getFunctionBarFavoritesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canNavigateUp;
@property(retain, nonatomic) WebBookmarkList *vendedFolder; // @synthesize vendedFolder=_vendedFolder;
- (void)dealloc;
- (id)initWithCombinedFavoritesController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

