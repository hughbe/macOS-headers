//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSXPCStoreServerEndpointFactory-Protocol.h>

@class NSString, NSURL, PLAssetsdClient;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>
{
    NSURL *_libraryURL;
    PLAssetsdClient *_assetsdClient;
}

- (void).cxx_destruct;
- (id)newEndpoint;
- (id)initWithAssetsdClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

