//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject
{
    NSMutableDictionary *_UUIDToTimerMap;
    id <MSPauseManagerDelegate> _delegate;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPauseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unpauseUUID:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)pingPauseUUID:(id)arg1;
- (void)_addPauseUUID:(id)arg1;
- (BOOL)isPaused;
- (void)dealloc;
- (id)init;

@end

