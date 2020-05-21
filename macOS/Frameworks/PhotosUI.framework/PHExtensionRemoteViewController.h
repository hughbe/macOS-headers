//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <PhotosUI/PHExtensionRemoteViewControllerProtocol-Protocol.h>

@class NSExtension, NSExtensionContext, NSString, NSUUID, PHExtensionHostViewPreferredSizes;
@protocol PHExtensionRemoteViewControllerDelegate;

@interface PHExtensionRemoteViewController : NSRemoteViewController <PHExtensionRemoteViewControllerProtocol>
{
    id <PHExtensionRemoteViewControllerDelegate> _delegate;
    NSExtension *_extension;
    NSUUID *_sessionUUID;
    PHExtensionHostViewPreferredSizes *_preferredSizes;
}

+ (id)serviceViewControllerClassName;
+ (void)requestViewControllerFromExtension:(id)arg1 sizeHint:(struct CGSize)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestViewControllerFromExtension:(id)arg1 inputItems:(id)arg2 sizeHint:(struct CGSize)arg3 connectionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) PHExtensionHostViewPreferredSizes *preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <PHExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)preferredMaximumSize;
- (struct CGSize)preferredMinimumSize;
- (void)updatePreferredSizes:(id)arg1;
- (void)updateViewConstraints;
- (id)exportedObject;
- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)serviceViewControllerInterface;
- (void)disconnect;
- (id)vendorProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id vendorProxy;
@property(readonly, nonatomic) NSExtensionContext *hostContext;
- (void)connectToExtension:(id)arg1 withSessionID:(id)arg2 sizeHint:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

