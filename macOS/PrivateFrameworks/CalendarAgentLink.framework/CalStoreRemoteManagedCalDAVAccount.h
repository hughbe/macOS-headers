//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedAccount.h>

@interface CalStoreRemoteManagedCalDAVAccount : CalStoreRemoteManagedAccount
{
    BOOL _useKerberos;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL useKerberos; // @synthesize useKerberos=_useKerberos;
- (void)encodeWithCoder:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (id)initWithCoder:(id)arg1;

@end

