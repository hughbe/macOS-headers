//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFControlFlowAction.h>

#import <WorkflowKit/WFArrayParameterEventObserver-Protocol.h>
#import <WorkflowKit/WFVariableDelegate-Protocol.h>

@class NSString, WFVariableString;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>
{
    long long _latestMenuChoice;
    WFVariableString *_itemTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) WFVariableString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) long long latestMenuChoice; // @synthesize latestMenuChoice=_latestMenuChoice;
- (void)variableDidChange:(id)arg1;
- (void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
- (void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)arg1;
- (id)intermediaryActions;
- (id)defaultOutputName;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)showAlertWithInput:(id)arg1;
- (void)showNotificationWithInput:(id)arg1;
- (id)newIntermediaryActionWithMenuItemTitle:(id)arg1;
- (id)createAccompanyingActions;
- (id)inputSourceInWorkflow:(id)arg1;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)localizedName;
- (id)name;
- (id)serializedParameters;
- (void)initializeParameters;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

