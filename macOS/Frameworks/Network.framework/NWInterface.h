//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NSCopying-Protocol.h>
#import <Network/NSSecureCoding-Protocol.h>
#import <Network/NWPrettyDescription-Protocol.h>

@class NSString;
@protocol OS_nw_interface;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_interface> *_internalInterface;
}

+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSObject<OS_nw_interface> *internalInterface; // @synthesize internalInterface=_internalInterface;
- (id)createProtocolBufferObject;
@property(readonly, nonatomic) NSString *typeString;
- (BOOL)isDeepEqual:(id)arg1;
- (BOOL)isShallowEqual:(id)arg1;
- (id)ipv4Broadcast;
- (id)ipv4Netmask;
@property(readonly, nonatomic) NWInterface *delegateInterface;
@property(readonly, nonatomic) unsigned long long generation;
@property(readonly, nonatomic) long long mtu;
@property(readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property(readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) unsigned long long interfaceIndex;
@property(readonly, nonatomic) NSString *interfaceName;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2;

@end

