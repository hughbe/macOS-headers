//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_nw_advertise_descriptor;

@interface NWAdvertiseDescriptor : NSObject
{
    NSObject<OS_nw_advertise_descriptor> *_internalDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_nw_advertise_descriptor> *internalDescriptor; // @synthesize internalDescriptor=_internalDescriptor;
@property(retain, nonatomic) NSData *txtRecord;
- (id)privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;
@property(readonly, nonatomic) NSString *bonjourServiceName;
@property(readonly, nonatomic) NSString *bonjourServiceType;
@property(readonly, nonatomic) NSString *bonjourServiceDomain;
- (id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;

@end

