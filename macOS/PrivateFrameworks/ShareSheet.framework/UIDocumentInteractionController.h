//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/UIActionSheetDelegate-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate>
{
    id <UIDocumentInteractionControllerDelegate> _delegate;
    NSURL *_URL;
    NSString *_UTI;
    NSString *_name;
    NSArray *_icons;
    id _annotation;
    NSArray *_gestureRecognizers;
}

+ (id)interactionControllerWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openDocumentWithDefaultApplication;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

