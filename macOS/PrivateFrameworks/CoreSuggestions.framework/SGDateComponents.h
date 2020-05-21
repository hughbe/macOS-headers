//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject
{
    NSDateComponents *_dateComponents;
}

+ (id)dateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToDateComponents:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;

@end

