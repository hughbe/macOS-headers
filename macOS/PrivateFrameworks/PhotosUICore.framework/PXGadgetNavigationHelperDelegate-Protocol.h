//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PXGadgetDataSource, PXGadgetNavigationHelper;
@protocol PXGadget;

@protocol PXGadgetNavigationHelperDelegate
- (void)navigationHelperDidNotFindValidGadget:(PXGadgetNavigationHelper *)arg1;
- (BOOL)navigationHelperCanCurrentlyNavigate:(PXGadgetNavigationHelper *)arg1;
- (PXGadgetDataSource *)gadgetDataSourceForNavigationHelper:(PXGadgetNavigationHelper *)arg1;
- (BOOL)navigateToGadget:(id <PXGadget>)arg1 animated:(BOOL)arg2;
@end

