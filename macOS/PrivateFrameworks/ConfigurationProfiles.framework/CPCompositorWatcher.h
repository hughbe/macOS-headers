//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPCompositorWatcher : NSObject
{
    NSString *mProfileUUID;
    NSArray *mUIDs;
    NSMutableArray *mRemainingUIDs;
    BOOL mDone;
}

- (_Bool)isDone;
- (id)getProfileUUID;
- (void)notificationReceived:(id)arg1;
- (id)gatherLoggedInUserUIDs;
- (void)setUIDs:(id)arg1;
- (id)getUIDs;
- (void)dealloc;
- (id)initForProfile:(id)arg1;

@end

