//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class SidebarTopBarView;

@protocol SidebarTopBarViewDelegate <NSObject>
@property(readonly, nonatomic) id currentSidebarModeIdentifier;
- (void)sidebarTopBarView:(SidebarTopBarView *)arg1 selectedTabIdentifierDidChange:(id)arg2;

@optional
- (void)didSelectBackButtonInSidebarTopBarView:(SidebarTopBarView *)arg1;
@end

