//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/AutoFillCandidateListBarItemControllerDelegate-Protocol.h>
#import <Safari/FormAutoFillCompletionControllerObserver-Protocol.h>
#import <Safari/NSTouchBarDelegate-Protocol.h>
#import <Safari/NSTouchBarProvider-Protocol.h>

@class AutoFillCandidateListBarItemController, NSCustomTouchBarItem, NSString, NSTouchBar;
@protocol AutoFillFunctionBarProviderDelegate;

__attribute__((visibility("hidden")))
@interface AutoFillFunctionBarProvider : NSObject <AutoFillCandidateListBarItemControllerDelegate, NSTouchBarDelegate, FormAutoFillCompletionControllerObserver, NSTouchBarProvider>
{
    Vector_e1d4bda3 _currentCompletionListItems;
    NSCustomTouchBarItem *_autoFillLabelFunctionBarItem;
    AutoFillCandidateListBarItemController *_autoFillCandidateListBarItemController;
    NSTouchBar *_functionBar;
    id <AutoFillFunctionBarProviderDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AutoFillFunctionBarProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)didShowAutoFillQuickTypeForItem:(const struct CompletionListItem *)arg1;
- (id)textForCompletionListItem:(const struct CompletionListItem *)arg1;
- (id)imageForCompletionListItem:(const struct CompletionListItem *)arg1;
- (void)candidateListBarItemController:(id)arg1 didSelectCandidateAtIndex:(unsigned long long)arg2;
- (id)candidateListBarItemController:(id)arg1 imageForCandidateAtIndex:(unsigned long long)arg2;
- (id)candidateListBarItemController:(id)arg1 labelForCandidateAtIndex:(unsigned long long)arg2;
- (id)_candidateBarTextAttributesForMultiLineLabel;
- (id)_candidateBarTextAttributesForSingleLineLabel;
- (unsigned long long)numberOfCandidatesForCandidateListBarItemController:(id)arg1;
- (void)formAutoFillController:(id)arg1 didRefreshCompletionListItems:(const Vector_e1d4bda3 *)arg2;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_autoFillCandidateListFunctionBarItem;
- (id)_autoFillCandidateListBarItemController;
- (void)setTouchBar:(id)arg1;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_functionBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

