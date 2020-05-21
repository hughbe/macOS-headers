//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class NSObject, NSString, NSURL, PHImageDecoderAsyncDecodeRequestHandle, PHImageDisplaySpec, PHImageRequestBehaviorSpec, PHImageResourceChooser, PHImageResult;
@protocol OS_dispatch_semaphore, PHImageRequestDelegate;

@interface PHImageRequest : PHMediaRequest
{
    struct os_unfair_lock_s _lock;
    PHImageDecoderAsyncDecodeRequestHandle *_asyncDecodeRequestHandle;
    PHImageResult *_imageResult;
    PHImageResourceChooser *_chooser;
    struct CGSize _desiredImageSize;
    BOOL _forceIgnoreCache;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
    NSURL *_configuredImageURL;
    NSString *_configuredImageUTI;
    long long _configuredExifOrientation;
    id <PHImageRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestBehaviorSpec *_behaviorSpec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(retain, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property(readonly, nonatomic) __weak id <PHImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize desiredImageSize; // @synthesize desiredImageSize=_desiredImageSize;
- (id)description;
- (void)configureWithURL:(id)arg1;
- (void)configureWithURL:(id)arg1 uniformTypeIdentifier:(id)arg2 exifOrientation:(int)arg3;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)startRequest;
- (void)cancel;
- (BOOL)isSynchronous;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 chooser:(id)arg8 delegate:(id)arg9;
- (void)_decodeImageConfiguredWithURL:(id)arg1 isPrimaryFormat:(BOOL)arg2 exifOrientation:(long long)arg3;

@end

