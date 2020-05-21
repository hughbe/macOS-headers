//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject
{
    AVInternalDeviceList *_internalList;
}

+ (id)deviceForUID:(id)arg1;
+ (BOOL)setInputDevice:(id)arg1;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end

