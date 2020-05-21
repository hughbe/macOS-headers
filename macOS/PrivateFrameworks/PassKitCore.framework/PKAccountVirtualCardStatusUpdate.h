//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSArray, NSString;

@interface PKAccountVirtualCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    unsigned long long _reason;
    NSArray *_updatedVirtualCards;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *updatedVirtualCards; // @synthesize updatedVirtualCards=_updatedVirtualCards;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

