//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/NSObject-Protocol.h>

@class CalManagedDefaultAlarmSet;

@protocol DefaultAlarmProviderProtocol <NSObject>
@property(readonly, retain) CalManagedDefaultAlarmSet *localDefaultAlarmSet;
@property(readonly, retain) CalManagedDefaultAlarmSet *defaultAlarmSet;
@property BOOL shareDefaultAlarmSettings;
@end

