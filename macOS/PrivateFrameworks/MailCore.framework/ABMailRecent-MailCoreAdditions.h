//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABMailRecent.h>

@class NSDate;

@interface ABMailRecent (MailCoreAdditions)
- (id)_fullName;
- (BOOL)isGroup;
@property(readonly, nonatomic) BOOL hasRelatedAddressBookRecord;
@property(readonly, nonatomic) NSDate *mostRecentDate;
- (id)extension;
- (id)nickname;
- (id)middleName;
@end

