//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask : AMSTask
{
    AMSProcessInfo *_clientInfo;
    NSString *_password;
    NSString *_username;
}

- (void).cxx_destruct;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)performTask;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end

