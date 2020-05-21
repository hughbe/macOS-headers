//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _deliveryStream;
    long long _type;
    unsigned long long _timestamp;
    long long _contextDataType;
    NSData *_contextData;
}

+ (BOOL)supportsSecureCoding;
+ (id)eventsReferenceTime;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(readonly, nonatomic) long long contextDataType; // @synthesize contextDataType=_contextDataType;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long deliveryStream; // @synthesize deliveryStream=_deliveryStream;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateStamp;
- (id)contextDataAsProtobuf;
- (id)contextDataAsDictionary;
- (id)legacyTypeName;
- (id)typeName;
- (id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

