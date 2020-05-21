//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMCalDAVNotification.h>

#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>

@class NSString, NSURL;

@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>
{
}


// Remaining properties
@property(copy, nonatomic) NSString *daPushKey;
@property(copy, nonatomic) NSString *daSyncToken;
@property(copy, nonatomic) NSString *externalIdentifier;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(retain, nonatomic) NSURL *hostURL; // @dynamic hostURL;
@property(retain, nonatomic) NSString *uuidString; // @dynamic uuidString;
@end

