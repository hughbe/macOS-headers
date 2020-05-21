//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABBookCommand.h>

@class NSArray;
@protocol ABLinkingInfoDataSource;

@interface ABUnlinksLoneRemainingPeopleCommand : ABBookCommand
{
    NSArray *_linkIds;
    id <ABLinkingInfoDataSource> _adapter;
}

+ (id)commandWithLinkIds:(id)arg1 adapter:(id)arg2;
- (void)unlinkPeople:(id)arg1;
- (id)peopleFilteredForNoRemainingLinkedPeople:(id)arg1;
- (id)remainingPeople;
- (void)execute;
- (void)dealloc;
- (id)initWithLinkIds:(id)arg1 adapter:(id)arg2;

@end

