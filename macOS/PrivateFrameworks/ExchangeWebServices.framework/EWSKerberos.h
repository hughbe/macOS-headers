//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EWSKerberos : NSObject
{
}

+ (id)credentialForHost:(id)arg1 user:(id)arg2;
+ (BOOL)hasCredentialForHost:(id)arg1 user:(id)arg2;
+ (id)_principalsForHost:(id)arg1 user:(id)arg2;
+ (void)_credentialCacheDidChange:(id)arg1;

@end

