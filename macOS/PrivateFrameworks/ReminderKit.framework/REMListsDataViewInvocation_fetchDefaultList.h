//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding>
{
    BOOL _keepDefaultOnly;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL keepDefaultOnly; // @synthesize keepDefaultOnly=_keepDefaultOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeepDefaultOnly:(BOOL)arg1;

@end

