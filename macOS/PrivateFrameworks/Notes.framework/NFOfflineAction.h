//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NFAccount;

@interface NFOfflineAction : NSManagedObject
{
}

+ (BOOL)pendingOfflineActionsExist;
- (id)compactDescription;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NFAccount *account; // @dynamic account;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;

@end

