//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSString;

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_significantEvent;
    NSDateComponents *_offset;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_update:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
@property(retain, nonatomic) NSDateComponents *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;

@end

