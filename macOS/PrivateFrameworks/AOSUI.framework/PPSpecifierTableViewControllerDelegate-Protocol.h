//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class PPSpecifier, PPSpecifierTableViewController;

@protocol PPSpecifierTableViewControllerDelegate <NSObject>

@optional
- (BOOL)shouldSelectSpecifier:(PPSpecifier *)arg1 tableViewController:(PPSpecifierTableViewController *)arg2;
- (void)didSelectSpecifier:(PPSpecifier *)arg1 tableViewController:(PPSpecifierTableViewController *)arg2;
@end

