//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABLinkingCommand.h>

@interface ABLinkPeopleCommand : ABLinkingCommand
{
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)ignoresGuardianRestrictions;
- (id)actionName;
- (id)pickPreferredPersonFromPeople:(id)arg1;
- (void)preferSomeoneForProperties:(id)arg1;
- (void)changePeople:(id)arg1;

@end

