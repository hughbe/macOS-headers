//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCAllItemsDidUploadTracker-Protocol.h>
#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass>
{
    BRCAccountSession *_session;
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)main;
- (void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2;
- (void)cancel;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 appLibraries:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

