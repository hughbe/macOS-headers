//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray;
@protocol TabDialogConfiguration;

@protocol TabDialogPresenter <NSObject>
@property(readonly, nonatomic) long long currentTabDialogType;
@property(readonly, nonatomic, getter=isShowingTabDialog) BOOL showingTabDialog;
- (void)dismissTabDialog;
- (void)presentTabDialogWithConfiguration:(id <TabDialogConfiguration>)arg1 dismissalBlock:(void (^)(id, BOOL))arg2 blocksWebProcessUntilDismissed:(BOOL)arg3 cancellationExemptions:(NSArray *)arg4;
@end

