//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class CNContactStore, CNLabeledValue;

@interface CNUIRejectSugggestedValueCommand : CNUIUndoableCommand
{
    CNLabeledValue *_valueToReject;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNLabeledValue *valueToReject; // @synthesize valueToReject=_valueToReject;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithContactStore:(id)arg1 suggestedValueToReject:(id)arg2 ignoresGuardianRestrictions:(BOOL)arg3;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;

@end

