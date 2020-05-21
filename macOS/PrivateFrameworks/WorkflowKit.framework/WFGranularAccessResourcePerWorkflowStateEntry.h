//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSNumber;
@protocol NSObject><NSSecureCoding;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding>
{
    id <NSObject><NSSecureCoding> _value;
    NSNumber *_authorized;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueKey;
+ (Class)valueTypeClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *authorized; // @synthesize authorized=_authorized;
@property(readonly, nonatomic) id <NSObject><NSSecureCoding> value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)entryBySettingAuthorized:(BOOL)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 authorized:(id)arg2;

@end

