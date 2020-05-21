//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PhotosUI/NSDraggingDestination-Protocol.h>
#import <PhotosUI/NSWindowDelegate-Protocol.h>
#import <PhotosUI/PHPhotoLibraryChangeObserver-Protocol.h>
#import <PhotosUI/PHProjectTypeDescriptionSourceServiceDelegate-Protocol.h>
#import <PhotosUI/PUProjectExtensionVendor-Protocol.h>

@class NSString, PHPhotoLibrary, PHProject, PHProjectTypeDescriptionSourceService;
@protocol PHProjectExtensionController;

@interface PHProjectExtensionContext : NSExtensionContext <NSWindowDelegate, NSDraggingDestination, PUProjectExtensionVendor, PHPhotoLibraryChangeObserver, PHProjectTypeDescriptionSourceServiceDelegate>
{
    id <PHProjectExtensionController> _projectExtensionController;
    PHProjectTypeDescriptionSourceService *_typeDescriptionService;
    PHPhotoLibrary *_photoLibrary;
    PHProject *_project;
}

+ (id)setupLibraryLock;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)supportedDraggedTypes;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setProject:) PHProject *project; // @synthesize project=_project;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) PHProjectTypeDescriptionSourceService *_typeDescriptionService; // @synthesize _typeDescriptionService;
@property(nonatomic) __weak id <PHProjectExtensionController> _projectExtensionController; // @synthesize _projectExtensionController;
- (void)connectionWasInvalidatedForProjectTypeDescriptionSourceService:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_setupProjectWithIdentifier:(id)arg1 libraryURL:(id)arg2;
- (void)finishProjectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeProjectEditingWithProjectIdentifier:(id)arg1 libraryURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginProjectWithProjectIdentifier:(id)arg1 libraryURL:(id)arg2 projectInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestProjectTypeSourceForCategory:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestTCCAccessForPhotos:(CDUnknownBlockType)arg1;
- (id)projectHostExtensionContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)updatedProjectInfoFromProjectInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showEditorForAsset:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)_dragTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

