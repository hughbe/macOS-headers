//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/NSObject-Protocol.h>

@protocol SCRValueChangeMonitorDelegate;

@protocol SCRValueChangeMonitorDelegate <NSObject>
- (BOOL)didHandleNewValueAfterPolling:(id <SCRValueChangeMonitorDelegate>)arg1;

@optional
- (void)valueDidNotChangeAfterPolling:(id <SCRValueChangeMonitorDelegate>)arg1;
@end

