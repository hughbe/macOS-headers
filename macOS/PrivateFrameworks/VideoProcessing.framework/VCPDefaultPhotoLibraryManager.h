//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSString, NSURL, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPDefaultPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_defaultPhotoLibraryURL;
    PHPhotoLibrary *_defaultPhotoLibrary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)closedefaultPhotoLibrary;
- (id)defaultPhotoLibrary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

