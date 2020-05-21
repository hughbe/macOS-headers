//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdServiceContext-Protocol.h>

@class NSError, NSString, NSXPCConnection, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundle;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext>
{
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSError *_replyWarning;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *replyWarning; // @synthesize replyWarning=_replyWarning;
@property(readonly, copy, nonatomic) NSString *clientDebugDescription;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
- (id)libraryServicesManager;
- (id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

