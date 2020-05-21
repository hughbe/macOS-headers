//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/NSTableViewDataSource-Protocol.h>
#import <MapKit/NSTableViewDelegate-Protocol.h>

@class NSString, NSTableView;

@interface _MKTableViewController : _MKUIViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (id)_tableRootView;
- (void)updateTableHeightConstraintAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)_defaultTableView;
- (Class)classForRootView;
- (id)separatorColor;
- (double)defaultTrailingSeparatorInset;
- (double)defaultLeadingSeparatorInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

