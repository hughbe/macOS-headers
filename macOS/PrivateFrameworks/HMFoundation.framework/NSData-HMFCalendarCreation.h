//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSData (HMFCalendarCreation) <HMFObject>
+ (id)shortDescription;
- (id)decodeCalendar;
- (id)decodeArrayOfDateComponents;
- (id)decodeDateComponents;
- (id)hmf_zeroingCopy;
@property(readonly) NSString *hmf_hexadecimalRepresentation;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;
@property(readonly, getter=hmf_isZeroed) BOOL hmf_zeroed;
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)decodeTimeZone;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

