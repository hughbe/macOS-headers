//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVDepartureAnnouncingObjectMonitor : NSObject
{
    AVWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;
- (void)dealloc;
- (id)initWithMonitoringObject:(id)arg1;

@end

