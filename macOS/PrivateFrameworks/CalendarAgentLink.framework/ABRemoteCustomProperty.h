//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSCopying-Protocol.h>
#import <CalendarAgentLink/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ABRemoteCustomProperty : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_propertyName;
    NSString *_recordType;
    NSNumber *_valueType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSNumber *valueType; // @synthesize valueType=_valueType;
@property(copy) NSString *recordType; // @synthesize recordType=_recordType;
@property(copy) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end

