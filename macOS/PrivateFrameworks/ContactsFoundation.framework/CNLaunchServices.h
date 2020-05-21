//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNLaunchServicesAdapter, OS_os_log;

@interface CNLaunchServices : NSObject
{
    id <CNLaunchServicesAdapter> _adapter;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) id <CNLaunchServicesAdapter> adapter; // @synthesize adapter=_adapter;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (id)init;

@end

