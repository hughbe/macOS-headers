//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiscRecording/DRDeviceFilter.h>

@class DRSetupPanel;

__attribute__((visibility("hidden")))
@interface DRSetupPanelDeviceFilter : DRDeviceFilter
{
    DRSetupPanel *setupPanel;
}

- (id)bestDeviceFromAvailableDevices:(id)arg1;
- (BOOL)deviceCouldBeTarget:(id)arg1;
- (id)initWithSetupPanel:(id)arg1;

@end

