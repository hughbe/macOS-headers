//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABApplicationServices-Protocol.h>

@class NSString;

@interface ABFrameworkApplicationServices : NSObject <ABApplicationServices>
{
}

- (void)showMCCConfigForAccountID:(id)arg1;
- (void)showPasswordPanelModalForWindow:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showContactWithUniqueId:(id)arg1 shouldUnify:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

