//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

#import <HomeKitDaemon/HMDSettingConstraintModelProtocol-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>
{
}

+ (id)hmbProperties;
- (id)copyWithNewParentModelID:(id)arg1;
@property(readonly, nonatomic) NSString *nameForKeyPath;

// Remaining properties
@property(copy, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end

