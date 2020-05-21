//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NWDeviceReport : NSObject
{
    BOOL _batteryExternalPowerIsConnected;
    BOOL _batteryIsCharging;
    BOOL _batteryFullyCharged;
    BOOL _batteryAtWarnLevel;
    BOOL _batteryAtCriticalLevel;
    BOOL _devicePluggedIn;
    BOOL _deviceScreenOn;
    unsigned int _batteryPercentage;
    unsigned int _batteryCurrentCapacity;
    unsigned int _batteryMaximumCapacity;
    unsigned int _batteryDesignCapacity;
    unsigned int _batteryAbsoluteCapacity;
    unsigned int _batteryVoltage;
    unsigned int _batteryTimeRemaining;
    unsigned int _thermalPressure;
}

@property(nonatomic) unsigned int thermalPressure; // @synthesize thermalPressure=_thermalPressure;
@property(nonatomic) BOOL deviceScreenOn; // @synthesize deviceScreenOn=_deviceScreenOn;
@property(nonatomic) BOOL devicePluggedIn; // @synthesize devicePluggedIn=_devicePluggedIn;
@property(nonatomic) BOOL batteryAtCriticalLevel; // @synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel;
@property(nonatomic) BOOL batteryAtWarnLevel; // @synthesize batteryAtWarnLevel=_batteryAtWarnLevel;
@property(nonatomic) BOOL batteryFullyCharged; // @synthesize batteryFullyCharged=_batteryFullyCharged;
@property(nonatomic) BOOL batteryIsCharging; // @synthesize batteryIsCharging=_batteryIsCharging;
@property(nonatomic) BOOL batteryExternalPowerIsConnected; // @synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected;
@property(nonatomic) unsigned int batteryTimeRemaining; // @synthesize batteryTimeRemaining=_batteryTimeRemaining;
@property(nonatomic) unsigned int batteryVoltage; // @synthesize batteryVoltage=_batteryVoltage;
@property(nonatomic) unsigned int batteryAbsoluteCapacity; // @synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity;
@property(nonatomic) unsigned int batteryDesignCapacity; // @synthesize batteryDesignCapacity=_batteryDesignCapacity;
@property(nonatomic) unsigned int batteryMaximumCapacity; // @synthesize batteryMaximumCapacity=_batteryMaximumCapacity;
@property(nonatomic) unsigned int batteryCurrentCapacity; // @synthesize batteryCurrentCapacity=_batteryCurrentCapacity;
@property(nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
- (id)description;

@end

