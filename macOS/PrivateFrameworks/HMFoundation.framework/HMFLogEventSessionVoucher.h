//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding>
{
    NSString *_serviceName;
    NSUUID *_uuid;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2;

@end

