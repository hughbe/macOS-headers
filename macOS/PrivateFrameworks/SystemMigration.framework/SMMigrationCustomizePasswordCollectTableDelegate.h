//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IASUtilities/IASCommonViewBasedTableDelegate.h>

@class SMMigrationCustomizeViewController;

@interface SMMigrationCustomizePasswordCollectTableDelegate : IASCommonViewBasedTableDelegate
{
    SMMigrationCustomizeViewController *_controller;
}

@property SMMigrationCustomizeViewController *controller; // @synthesize controller=_controller;
- (void)pressedPromoteToAdminButton:(id)arg1;
- (void)pressedPasswordButton:(id)arg1;
- (id)makeNewCellViewWithIdentifier:(id)arg1 forTableView:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)viewIdenfierForTableView:(id)arg1 andRow:(long long)arg2;

@end

