//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOKerberosHelper : NSObject
{
}

+ (id)listCredentials;
+ (BOOL)authenticate:(struct gss_cred_id_t_desc_struct *)arg1 toServer:(id)arg2 returningToken:(id *)arg3 andError:(id *)arg4;
+ (void)destroyCredentialForUPN:(id)arg1;
+ (void)destroyCredential:(id)arg1;
+ (void)destroyAllCredentials;
+ (struct gss_cred_id_t_desc_struct *)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3;
+ (BOOL)validatePassword:(id)arg1 forUser:(id)arg2;
+ (BOOL)changePasswordForUPN:(id)arg1 withOldPassword:(id)arg2 withNewPassword:(id)arg3 withError:(id *)arg4;
+ (_Bool)_testForUPNForUser:(id)arg1;
+ (struct gss_cred_id_t_desc_struct *)acquireCredentialForUPN:(id)arg1;
+ (struct gss_cred_id_t_desc_struct *)acquireCredentialForUUID:(id)arg1;

@end

