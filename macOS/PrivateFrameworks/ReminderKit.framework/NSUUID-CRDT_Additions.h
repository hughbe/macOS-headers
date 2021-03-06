//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

#import <ReminderKit/CRCoding-Protocol.h>
#import <ReminderKit/CRDataType-Protocol.h>
#import <ReminderKit/CREquatable-Protocol.h>

@class NSString;

@interface NSUUID (CRDT_Additions) <CRDataType, CREquatable, CRCoding>
+ (id)CR_zero;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_UUIDFromStdString:(const basic_string_a1f69cfb *)arg1;
+ (id)TTZero;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)CR_shortDescription;
- (long long)CR_compare:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (basic_string_a1f69cfb)CR_toStdString;
- (id)TTShortDescription;
- (long long)TTCompare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

