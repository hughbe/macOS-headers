//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SkyLight/SLDataTimelineProcess-Protocol.h>
#import <SkyLight/SLDataTimelineProcessWindows-Protocol.h>
#import <SkyLight/SLXPCConvertible-Protocol.h>

@protocol SLDataTimelineProcessWindows;

__attribute__((visibility("hidden")))
@interface SLDataTimelineProcessEntry : NSObject <SLDataTimelineProcess, SLDataTimelineProcessWindows, SLXPCConvertible>
{
    unsigned long long _windowScreenStates[4];
    int _pid;
}

+ (id)entryWithXPCObject:(id)arg1;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (id)createXPCObject;
- (id)initWithXPCObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long onScreenVisible;
@property(readonly, nonatomic) unsigned long long onScreenOccluded;
@property(readonly, nonatomic) unsigned long long offScreen;
@property(readonly, nonatomic) unsigned long long orderedOut;
@property(readonly, nonatomic) id <SLDataTimelineProcessWindows> windowData;

@end

