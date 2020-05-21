//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerAssetChangeDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVoiceTriggerAssetChangeDelegate> _delegate;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSVoiceTriggerAssetChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyVoiceTriggerAssetChanged;
- (void)startMonitoring;
- (id)init;

@end

