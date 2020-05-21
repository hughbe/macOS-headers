//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSObject;
@protocol SPPreviewControllerDelegate;

@interface SPPreviewController : NSViewController
{
    NSObject<SPPreviewControllerDelegate> *_delegate;
    NSObject *_punchoutDelegate;
    id _resultsSelectionDelegate;
}

- (void).cxx_destruct;
@property __weak id resultsSelectionDelegate; // @synthesize resultsSelectionDelegate=_resultsSelectionDelegate;
@property __weak NSObject *punchoutDelegate; // @synthesize punchoutDelegate=_punchoutDelegate;
@property __weak NSObject<SPPreviewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)awakeFromNib;
- (void)mouseUp:(id)arg1;
- (id)urlToOpen;
- (void)clearPreheatCache:(int)arg1;
- (void)preheat:(id)arg1 row:(int)arg2 generation:(int)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

