//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSTextStorageDelegate-Protocol.h>
#import <AppKit/NSTextViewDelegate-Protocol.h>

@class NSString, NSTextInputContext, __NSDelegateObservingTextView;

__attribute__((visibility("hidden")))
@interface NSBridgedTextSubstitutionController : NSObject <NSTextViewDelegate, NSTextStorageDelegate>
{
    NSTextInputContext *_inputContext;
    __NSDelegateObservingTextView *_textView;
    BOOL contentsValid;
}

@property(getter=isContentsValid) BOOL contentsValid; // @synthesize contentsValid;
- (void)convertToHalfWidth:(id)arg1;
- (void)convertToFullWidth:(id)arg1;
- (void)convertToTraditionalChinese:(id)arg1;
- (void)convertToSimplifiedChinese:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)checkTextInDocument:(id)arg1;
- (void)checkTextInSelection:(id)arg1;
- (void)replaceTextInSelection:(id)arg1;
- (void)addLinksInSelection:(id)arg1;
- (void)replaceDashesInSelection:(id)arg1;
- (void)replaceQuotesInSelection:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)prepareContextMenu:(id)arg1;
- (id)_mainSmartInsertDeleteMenuItem;
- (id)_findSmartInsertDeleteMenuItemInMenu:(id)arg1;
- (void)_prepareForTextInputStates;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)dealloc;
- (id)initWithTextInputContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

