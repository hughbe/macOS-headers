//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding>
{
    NSArray *_phones;
    NSArray *_emails;
}

+ (id)representationFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
- (id)archivedData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)matchesContactRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPhones:(id)arg1 emails:(id)arg2;

@end

