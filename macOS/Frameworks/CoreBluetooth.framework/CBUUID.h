//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying>
{
    unsigned char _bytes[16];
    BOOL _type;
}

+ (id)UUIDWithNSUUID:(id)arg1;
+ (id)UUIDWithCFUUID:(struct __CFUUID *)arg1;
+ (id)UUIDWithData:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDString;
@property(readonly, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithCFUUID:(struct __CFUUID *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;

@end

