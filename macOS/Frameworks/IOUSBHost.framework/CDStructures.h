//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct IOUSBBOSDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned char _field4;
};

struct IOUSBConfigurationDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct IOUSBDescriptorHeader {
    unsigned char _field1;
    unsigned char _field2;
};

struct IOUSBDeviceDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
};

struct IOUSBDeviceRequest {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct IOUSBEndpointDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned short _field5;
    unsigned char _field6;
};

struct IOUSBHostIOSourceDescriptors {
    unsigned short _field1;
    struct IOUSBEndpointDescriptor _field2;
    struct IOUSBSuperSpeedEndpointCompanionDescriptor _field3;
    struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor _field4;
};

struct IOUSBHostIsochronousFrame {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned long long _field5;
};

struct IOUSBInterfaceDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
};

struct IOUSBSuperSpeedEndpointCompanionDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned short _field5;
};

struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
};

