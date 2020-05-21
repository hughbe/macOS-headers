//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <IOBluetooth/NSCoding-Protocol.h>
#import <IOBluetooth/NSSecureCoding-Protocol.h>

@interface IOBluetoothSDPUUID : NSData <NSCoding, NSSecureCoding>
{
    NSData *mUUIDData;
    void *_mReserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef *)arg1;
+ (id)uuid32:(unsigned int)arg1;
+ (id)uuid16:(unsigned short)arg1;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForPortCoder;
- (Class)classForArchiver;
- (Class)classForCoder;
- (BOOL)isEqualToUUID:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (id)getUUIDWithLength:(unsigned int)arg1;
- (unsigned long long)length;
- (const void *)bytes;
- (struct OpaqueIOBluetoothObjectRef *)getSDPUUIDRef;
- (id)initWithUUID32:(unsigned int)arg1;
- (id)initWithUUID16:(unsigned short)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end

