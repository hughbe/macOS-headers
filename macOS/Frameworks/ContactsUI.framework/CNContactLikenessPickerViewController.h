//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/CNAvatarEditorDelegate-Protocol.h>
#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/CNContactCardWidget-Protocol.h>
#import <ContactsUI/CNRecentLikenessesViewDelegate-Protocol.h>

@class AKCardViewDataSource, CNAvatarViewController, CNContact, CNContactPersistenceHelper, CNLikeness, CNLikenessEditorPresentationController, CNRecentLikenessesViewController, CNUIMeContactMonitor, NSString;
@protocol CNCancelable;

@interface CNContactLikenessPickerViewController : NSViewController <CNRecentLikenessesViewDelegate, CNAvatarEditorDelegate, CNAvatarViewDelegate, CNContactCardWidget>
{
    BOOL _isMe;
    CNContact *_contact;
    AKCardViewDataSource *_dataSource;
    CNContactPersistenceHelper *_persistenceHelper;
    CNRecentLikenessesViewController *_recentsViewController;
    CNLikenessEditorPresentationController *_editorPresentationController;
    CNAvatarViewController *_avatarViewController;
    id <CNCancelable> _currentLikenessToken;
    CNLikeness *_likenessBeingEdited;
    CNUIMeContactMonitor *_meContactMonitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNUIMeContactMonitor *meContactMonitor; // @synthesize meContactMonitor=_meContactMonitor;
@property(retain, nonatomic) CNLikeness *likenessBeingEdited; // @synthesize likenessBeingEdited=_likenessBeingEdited;
@property(retain, nonatomic) id <CNCancelable> currentLikenessToken; // @synthesize currentLikenessToken=_currentLikenessToken;
@property __weak CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain) CNLikenessEditorPresentationController *editorPresentationController; // @synthesize editorPresentationController=_editorPresentationController;
@property(retain) CNRecentLikenessesViewController *recentsViewController; // @synthesize recentsViewController=_recentsViewController;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) CNContactPersistenceHelper *persistenceHelper; // @synthesize persistenceHelper=_persistenceHelper;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (double)desiredHeight;
- (void)processLikenessEditingResult:(id)arg1;
- (void)editorDidFinish:(id)arg1 withLikenessResult:(id)arg2 cancelled:(BOOL)arg3;
- (void)editorDidFinish:(id)arg1 withRemovedLikeness:(id)arg2;
- (void)prepareEditorPresentationController;
- (void)recentLikenessesViewController:(id)arg1 beginEditingLikeness:(id)arg2;
- (void)addNewLikenessRecentLikenessesViewController:(id)arg1;
- (void)reloadDataWithAvatarView:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

