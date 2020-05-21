//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, NSURL;
@protocol OS_ldap_connection, OS_ldap_operation;

@protocol CNLDAPServices <NSObject>
- (void)ldap_operation_cancel:(NSObject<OS_ldap_operation> *)arg1;
- (NSObject<OS_ldap_operation> *)ldap_connection_query_create:(NSObject<OS_ldap_connection> *)arg1:(int)arg2:(int)arg3:(NSString *)arg4:(NSString *)arg5:(NSArray *)arg6:(unsigned int)arg7:(BOOL)arg8:(void (^)(NSObject<OS_ldap_operation> *, struct __CFDictionary *))arg9:(void (^)(NSObject<OS_ldap_operation> *, int))arg10;
- (void)ldap_connection_start:(NSObject<OS_ldap_connection> *)arg1:(int)arg2:(void (^)(NSObject<OS_ldap_connection> *, struct __CFString *, int))arg3;
- (void)ldap_connection_set_disconnect_handler:(NSObject<OS_ldap_connection> *)arg1:(void (^)(NSObject<OS_ldap_connection> *, int))arg2;
- (NSObject<OS_ldap_connection> *)ldap_connection_create_with_url:(NSURL *)arg1;
@end

