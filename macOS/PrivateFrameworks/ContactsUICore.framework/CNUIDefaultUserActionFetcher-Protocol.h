//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable;
@protocol CNSchedulerProvider;

@protocol CNUIDefaultUserActionFetcher <NSObject>
- (CNObservable *)defaultActionItemForActionItems:(CNObservable *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)observableForDefaultActionsChanged;
@end

