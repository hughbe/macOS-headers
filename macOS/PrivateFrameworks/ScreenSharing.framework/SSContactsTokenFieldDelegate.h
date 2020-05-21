//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenSharing/IDSBatchIDQueryControllerDelegate-Protocol.h>
#import <ScreenSharing/NSTableViewDataSource-Protocol.h>
#import <ScreenSharing/NSTableViewDelegate-Protocol.h>
#import <ScreenSharing/NSTextFieldDelegate-Protocol.h>
#import <ScreenSharing/NSTokenFieldDelegate-Protocol.h>

@class IDSBatchIDQueryController, NSArray, NSMutableDictionary, NSScrollView, NSSet, NSString, NSTableView, NSWindow, SSContact, SSContactsTokenField;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSContactsTokenFieldDelegate : NSObject <NSTextFieldDelegate, NSTokenFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, IDSBatchIDQueryControllerDelegate>
{
    int _selectedIDSIndex;
    SSContactsTokenField *_tokenField;
    IDSBatchIDQueryController *_idQueryController;
    NSArray *_matchingContacts;
    NSMutableDictionary *_availabilityByID;
    SSContact *_selectedContact;
    NSString *_previousPartialString;
    NSWindow *_completionWindow;
    NSTableView *_completionTableView;
    NSScrollView *_completionTableScrollView;
    NSSet *_recentItems;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

+ (id)validIDSIDColor;
@property(retain) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy) NSSet *recentItems; // @synthesize recentItems=_recentItems;
@property(retain) NSScrollView *completionTableScrollView; // @synthesize completionTableScrollView=_completionTableScrollView;
@property(retain) NSTableView *completionTableView; // @synthesize completionTableView=_completionTableView;
@property(retain) NSWindow *completionWindow; // @synthesize completionWindow=_completionWindow;
@property(copy) NSString *previousPartialString; // @synthesize previousPartialString=_previousPartialString;
@property int selectedIDSIndex; // @synthesize selectedIDSIndex=_selectedIDSIndex;
@property(retain) SSContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain) NSMutableDictionary *availabilityByID; // @synthesize availabilityByID=_availabilityByID;
@property(copy) NSArray *matchingContacts; // @synthesize matchingContacts=_matchingContacts;
@property(retain) IDSBatchIDQueryController *idQueryController; // @synthesize idQueryController=_idQueryController;
@property SSContactsTokenField *tokenField; // @synthesize tokenField=_tokenField;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)dismissCompletionWindow:(id)arg1;
- (BOOL)_textViewContainsToken:(id)arg1;
- (void)_closeCompletionWindow;
- (id)_bestMatchingIdentifierForContact:(id)arg1;
- (id)_displayStringForContact:(id)arg1;
- (long long)_string:(id)arg1 indexAfterPrefixIgnoringCase:(id)arg2;
- (void)_tokenizeAndSelect;
- (void)_selectTableViewRow:(unsigned long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_completionTableView;
- (void)_presentCompletionWindow;
- (id)nameOrEmailSearchElementForSubstring:(id)arg1;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextCompletionEditingString:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (id)recentItemWithPortForURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

