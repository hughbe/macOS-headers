//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString, SGRecordId;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying>
{
    SGRecordId *_recordId;
    NSString *_sourceUniqueIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sourceUniqueIdentifier; // @synthesize sourceUniqueIdentifier=_sourceUniqueIdentifier;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (BOOL)isEqualToReminderMetadata:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2;

@end

