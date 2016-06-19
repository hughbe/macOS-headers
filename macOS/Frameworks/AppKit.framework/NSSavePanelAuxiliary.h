//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FITagEditorView, NSAlert, NSArray, NSBox, NSButton, NSDictionary, NSSavePanelAlertStyleContentView, NSString, NSTextField, NSURL, NSView;

@interface NSSavePanelAuxiliary : NSObject
{
    SEL modalDelegateDidEndSelector;
    void *contextInfo;
    double _distanceBetweenExtensionCheckAndNewFolderOrDocumentButton;
    id modalDelegate;
    NSAlert *currentAlert;
    id delegate;
    unsigned int openProgressIndicatorScheduled:1;
    unsigned int _runningAsASheet:1;
    unsigned int _useAlertStyle:1;
    unsigned int _retained:1;
    unsigned int _showNewDocumentButton:1;
    unsigned int _showRevertOriginalDocumentButton:1;
    unsigned int _revertOriginalDocumentChanges:1;
    unsigned int _hideExtension:1;
    unsigned int _showTagField:1;
    unsigned int _clientWillSetTags:1;
    unsigned int _clientSetADirectory:1;
    unsigned int _runningAsAService:1;
    unsigned int _showOptionsButton:1;
    unsigned int _canSendSynchronousMessagesToRemote:1;
    unsigned int _animatingSetFrame:1;
    unsigned int _iCloudOpenPanel:1;
    unsigned int _remoteAccessoryViewAvailable:1;
    unsigned int _reserved:15;
    CDUnknownBlockType _completionHandler;
    NSButton *_dontSaveButton;
    NSButton *_newDocumentButton;
    NSButton *_optionsButton;
    NSButton *_revertOriginalDocumentButton;
    NSBox *_appCentricAccessoryViewSeparatorBox;
    NSSavePanelAlertStyleContentView *_alertStyleContentView;
    double _alertStyleMinWidth;
    NSArray *_enabledFileTypes;
    NSArray *_fauxFilePackageTypes;
    NSURL *_overwritingAlertSuppressionURL;
    NSView *_tagFieldContainer;
    NSTextField *_tagFieldLabel;
    FITagEditorView *_tagField;
    NSArray *_tags;
    NSArray *_initialTags;
    NSString *_lastNameFieldText;
    unsigned long long _sandboxPermissions;
    NSDictionary *_sandboxExtensions;
    NSArray *_beginWithFileNames;
    int _remotePID;
}

@end

