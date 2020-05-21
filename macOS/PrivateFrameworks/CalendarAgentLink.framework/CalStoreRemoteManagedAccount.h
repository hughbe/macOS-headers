//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class CalStoreRemoteManagedPrincipal, NSString, NSURL;

@interface CalStoreRemoteManagedAccount : CalStoreRemoteManagedObject
{
    NSString *_acAccountID;
    NSString *_accountPluginID;
    BOOL _isEnabledForCalendar;
    BOOL _isEnabledForReminders;
    BOOL _isMarkedForDeletion;
    NSString *_login;
    NSURL *_serverURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSString *login; // @synthesize login=_login;
@property(nonatomic) BOOL isMarkedForDeletion; // @synthesize isMarkedForDeletion=_isMarkedForDeletion;
@property(nonatomic) BOOL isEnabledForReminders; // @synthesize isEnabledForReminders=_isEnabledForReminders;
@property(nonatomic) BOOL isEnabledForCalendar; // @synthesize isEnabledForCalendar=_isEnabledForCalendar;
@property(retain, nonatomic) NSString *accountPluginID; // @synthesize accountPluginID=_accountPluginID;
@property(retain, nonatomic) NSString *acAccountID; // @synthesize acAccountID=_acAccountID;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) CalStoreRemoteManagedPrincipal *mainPrincipal;
- (id)initWithCoder:(id)arg1;

@end

