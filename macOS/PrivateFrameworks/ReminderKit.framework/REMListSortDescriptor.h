//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMListSortDescriptor : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(BOOL)arg1;
+ (id)sortDescriptorSortingByNameAscending:(BOOL)arg1;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(BOOL)arg2;

@end

