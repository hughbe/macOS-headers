//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABBookCommand.h>

#import <AddressBookCore/ABUndoableCommand-Protocol.h>

@class NSString;

@interface ABBookUndoableCommand : ABBookCommand <ABUndoableCommand>
{
}

- (void)visit:(id)arg1;
- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (id)actionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL ignoresGuardianRestrictions;
@property(readonly) Class superclass;

@end

