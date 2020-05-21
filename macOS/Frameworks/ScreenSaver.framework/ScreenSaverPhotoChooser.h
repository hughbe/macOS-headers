//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ILMediaBrowserView, ILMediaManager, NSArray, NSButton, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSView, NSWindow, ScreenSaverDefaults;

@interface ScreenSaverPhotoChooser : NSObject
{
    ScreenSaverDefaults *_defaults;
    unsigned long long _currentPhotoChooserSource;
    NSString *_selectedMediaGroupID;
    BOOL _iLifeLockedAndLoaded;
    BOOL _photoStreamDetected;
    ILMediaManager *_folderMediaManager;
    ILMediaManager *_photosMediaManager;
    NSArray *_latestPhotosProjects;
    NSArray *_latestPhotosEvents;
    NSArray *_defaultCollections;
    NSArray *_mediaBrowserViewTLOArray;
    NSWindow *_mediaChooserWindow;
    ILMediaBrowserView *_mediaBrowserView;
    NSArray *_customControlsViewTLOArray;
    NSView *_customControlsView;
    NSPopUpButton *_sourcePopUpButton;
    NSTextField *_sourceLabelField;
    NSButton *_sourceShuffleButton;
    CDUnknownBlockType _sourceMenuLoadedBlock;
    NSMutableArray *_blocksToCallOnceFinishedLoading;
}

+ (id)_builtInCollectionsOrder;
+ (id)photoChooser;
- (id)_mediaGroupsForPhotoChooserSource:(unsigned long long)arg1;
- (id)_mediaGroupForID:(id)arg1;
- (id)_imagePathsForMediaGroupID:(id)arg1;
- (id)_imageFilesInDirectory:(id)arg1;
- (id)_filePathForURL:(id)arg1 isInEligibleArray:(id)arg2;
- (BOOL)photoStreamDetected;
- (void)resetToDefaultImageSelection;
- (void)_generateLatestPhotosInGroups;
- (void)_checkLoadingMediaManagersForPhotoListRequest;
- (void)_loadiLifeSources;
- (void)_resetLastViewedPhotoPath;
- (void)setLastViewedPhotoPath:(id)arg1 forScreenSaverView:(id)arg2;
- (void)changeToSourceType:(unsigned long long)arg1 identifier:(id)arg2 persistChange:(BOOL)arg3;
- (void)changeToSourceType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)sourceItemsForPhotoChooserSource:(unsigned long long)arg1;
- (id)currentlySelectedName;
- (id)currentlySelectedIdentifierInsideSource;
- (unsigned long long)currentlySelectedSourceType;
- (BOOL)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2;
- (void)presentAddFolderSheetOnWindow:(id)arg1;
- (void)presentAddRSSFeedSheetOnWindow:(id)arg1;
- (void)mediaBrowserCancel:(id)arg1;
- (void)mediaBrowserChoosePhotoSet:(id)arg1;
- (void)presentMediaBrowserSheetOnWindow:(id)arg1;
- (id)customControlsView;
- (void)iLifeEventClickedFromPopup:(id)arg1;
- (void)chooseFromMediaBrowser:(id)arg1;
- (void)chooseFolderClickedFromMenu:(id)arg1;
- (void)generateSourcePopupMenu;
- (void)sourceShuffleClicked:(id)arg1;
- (void)sourcePopUpClicked:(id)arg1;
- (void)_addHeaderString:(id)arg1 toMenu:(id)arg2;
- (void)setShufflesPhotos:(BOOL)arg1;
- (BOOL)shufflesPhotos;
- (id)listOfPhotoPathsFromSelectedSource;
- (void)loadPhotoSourcesAndCallBlockWhenDone:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

