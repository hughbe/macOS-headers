//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalCalDAVContainerSyncTaskGroupWrapper.h>

@class NSString;

@interface CalDAVNotificationContainerSyncTaskGroupWrapper : CalCalDAVContainerSyncTaskGroupWrapper
{
    NSString *_notificationPath;
}

- (void).cxx_destruct;
@property(retain) NSString *notificationPath; // @synthesize notificationPath=_notificationPath;
- (id)etagObjectsForServerFilenames:(id)arg1;
- (id)containerPath;
- (void)setSyncToken:(id)arg1;
- (void)setCTag:(id)arg1;
- (void)processAddedOrModified:(id)arg1 removed:(id)arg2;
- (id)initWithPrincipal:(id)arg1 notificationPath:(id)arg2;

@end

