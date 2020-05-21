//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

#import <GameCenterUI/GKComposeControllerDelegate-Protocol.h>
#import <GameCenterUI/NSTextFieldDelegate-Protocol.h>
#import <GameCenterUI/UISearchBarDelegate-Protocol.h>

@class GKChallenge, GKComposeController, NSArray, NSButton, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <NSTextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>
{
    BOOL _shouldIgnoreClearSelection;
    BOOL _shouldApplyInitialOffset;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    GKChallenge *_challenge;
    NSArray *_initiallySelectedPlayers;
    NSTextField *_descriptionLabel;
    NSButton *_sendButton;
    NSButton *_customizeMessageButton;
    NSTextField *_messageField;
    NSView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    GKComposeController *_composeController;
    struct NSEdgeInsets _initialInsets;
}

@property(retain, nonatomic) GKComposeController *composeController; // @synthesize composeController=_composeController;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) BOOL shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) struct NSEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(nonatomic) NSView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(nonatomic) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) NSButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) BOOL shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)doneWithComposeController;
- (void)composeControllerWasCancelled:(id)arg1;
- (void)composeController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)_updateButtonEnableState;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (void)loadData;
- (void)applyInitialContentOffset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

