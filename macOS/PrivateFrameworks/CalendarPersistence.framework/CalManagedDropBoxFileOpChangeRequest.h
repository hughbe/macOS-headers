//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString;

@interface CalManagedDropBoxFileOpChangeRequest : CalManagedChangeRequest
{
}

+ (id)insertDeleteDropBoxFileRequestForFileName:(id)arg1 forLocalUID:(id)arg2 forSharedUID:(id)arg3 fromSource:(id)arg4 inManagedObjectContext:(id)arg5;
+ (id)insertUploadDropBoxFileRequestForFileName:(id)arg1 forLocalUID:(id)arg2 forSharedUID:(id)arg3 fromSource:(id)arg4 inManagedObjectContext:(id)arg5;

// Remaining properties
@property(retain) NSString *attachmentName; // @dynamic attachmentName;

@end

