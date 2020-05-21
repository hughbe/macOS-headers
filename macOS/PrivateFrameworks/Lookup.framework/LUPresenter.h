//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Lookup/DDActionsManagerDelegateProtocol-Protocol.h>
#import <Lookup/NSPopoverDelegate-Protocol.h>

@class LUSearchTermIndicator, NSAttributedString, NSPopover, NSString;

@interface LUPresenter : NSObject <NSPopoverDelegate, DDActionsManagerDelegateProtocol>
{
    LUSearchTermIndicator *_searchTermIndicator;
    NSPopover *_resultsPopover;
    NSAttributedString *_displayedTerm;
    struct CGPoint _displayedTermOrigin;
}

+ (id)animationControllerForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
+ (id)animationControllerForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 options:(id)arg3;
+ (id)animationControllerForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 positioningView:(id)arg3 options:(id)arg4;
+ (id)addressInString:(id)arg1 range:(struct _NSRange)arg2;
+ (void)positioningView:(id *)arg1 andRect:(struct CGRect *)arg2 forTerm:(id)arg3 atLocation:(struct CGPoint)arg4 options:(id)arg5;
+ (BOOL)windowIsPopover:(id)arg1;
+ (BOOL)windowIsKey:(id)arg1;
+ (BOOL)windowIsMain:(id)arg1;
+ (id)windowAtScreenLocation:(struct CGPoint)arg1;
+ (id)sharedPresenter;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint displayedTermOrigin; // @synthesize displayedTermOrigin=_displayedTermOrigin;
@property(retain, nonatomic) NSAttributedString *displayedTerm; // @synthesize displayedTerm=_displayedTerm;
@property(retain, nonatomic) NSPopover *resultsPopover; // @synthesize resultsPopover=_resultsPopover;
@property(retain, nonatomic) LUSearchTermIndicator *searchTermIndicator; // @synthesize searchTermIndicator=_searchTermIndicator;
- (void)dataDetectorsUIActionWillStart;
- (void)dataDetectorsUIActionDidEnd;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (id)resultsViewController;
- (void)hideDefinition;
- (void)implicitHideDefinition;
- (unsigned long long)preferredEdgeOfPopover:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)showDefinitionForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
- (void)showDefinitionForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 options:(id)arg3;
- (void)showDefinitionForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 positioningView:(id)arg3 options:(id)arg4;
- (id)animationControllerForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
- (void)postPopoverWillCloseNotification;
- (void)commonLUPresenterTeardown;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

