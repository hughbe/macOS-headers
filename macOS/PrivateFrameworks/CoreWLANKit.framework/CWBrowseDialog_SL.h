//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <CoreWLANKit/NSCollectionViewDelegate-Protocol.h>
#import <CoreWLANKit/NSTableViewDataSource-Protocol.h>
#import <CoreWLANKit/NSTableViewDelegate-Protocol.h>
#import <CoreWLANKit/NSTextFieldDelegate-Protocol.h>

@class CWDisplayedScanResult, NSArray, NSButton, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSTextField;

@interface CWBrowseDialog_SL : NSWindowController <NSCollectionViewDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    CWDisplayedScanResult *_scanResult;
    id _delegate;
    NSArray *_updateScanResults;
    NSArray *_scanResults;
    BOOL _showingNetworkBrowser;
    NSString *_customTitle;
    NSString *_customDescription;
    long long _prevSelectedRow;
    long long _selectedRow;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSTableView *tableView;
    NSScrollView *tableScrollView;
    NSButton *helpButton;
}

+ (id)browseDialogWithScanResults:(id)arg1 title:(id)arg2 description:(id)arg3;
@property(copy) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy) NSArray *updateScanResults; // @synthesize updateScanResults=_updateScanResults;
@property(copy) NSArray *scanResults; // @synthesize scanResults=_scanResults;
@property(copy) CWDisplayedScanResult *scanResult; // @synthesize scanResult=_scanResult;
@property id delegate; // @synthesize delegate=_delegate;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)localizedStringForKey:(id)arg1;
- (void)updateWithScanResults:(id)arg1;
- (void)updateScanUI:(BOOL)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (void)onHelpButton:(id)arg1;
- (void)windowDidLoad;
- (void)close;
- (void)awakeFromNib;
- (id)initWithScanResults:(id)arg1 title:(id)arg2 description:(id)arg3;
- (id)prepareScanResults:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

