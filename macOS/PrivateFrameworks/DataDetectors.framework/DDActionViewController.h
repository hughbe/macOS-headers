//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DataDetectors/NSRemoteViewDelegate-Protocol.h>

@class DDActionContext, DDButtonBar, DDDataDetectorsViewHost, NSMapTable, NSProgressIndicator, NSRemoteView, NSURL;
@protocol DDActionViewPresenter;

@interface DDActionViewController : NSViewController <NSRemoteViewDelegate>
{
    struct __DDResult *_ddResult;
    NSURL *_url;
    BOOL _local;
    NSRemoteView *_remoteView;
    BOOL _isObserving;
    BOOL _bridgeBurnt;
    BOOL _presentationEndedSignaled;
    unsigned long long _actionType;
    DDDataDetectorsViewHost *_localViewController;
    NSMapTable *_localBridge;
    DDActionContext *_actionContext;
    DDButtonBar *_buttonBar;
    id <DDActionViewPresenter> _presenter;
    BOOL _editionMode;
    BOOL _editedContent;
    NSProgressIndicator *_spinner;
}

+ (unsigned long long)typeForUrl:(id)arg1;
+ (unsigned long long)typeForResult:(struct __DDResult *)arg1;
- (void).cxx_destruct;
@property BOOL editedContent; // @synthesize editedContent=_editedContent;
@property __weak id <DDActionViewPresenter> presenter; // @synthesize presenter=_presenter;
@property BOOL editionMode; // @synthesize editionMode=_editionMode;
@property(retain) NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
- (BOOL)viewShouldDragOldestAncestorWindow:(id)arg1;
- (void)viewDidInvalidate:(id)arg1;
- (BOOL)view:(id)arg1 shouldResize:(struct CGSize)arg2;
- (void)triggerControlWithIdentifier:(id)arg1;
- (void)setupControls:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_viewDidDisappear;
- (void)_viewWillDisappear;
- (void)_viewDidAppear;
- (void)_viewWillAppear;
- (void)runPhaseForLocalView:(id)arg1 remoteView:(id)arg2;
- (void)configureRunPhaseForBridge:(id)arg1;
- (void)finalizeForBridge:(id)arg1;
- (void)_viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)loadView;
- (void)burnViewBridge;
- (void)commonRemoteViewControllerTeardown;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 url:(id)arg2 context:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (void)cleanAndSetContext:(id)arg1;
- (struct CGSize)preferredContentSize;
@property BOOL local;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

