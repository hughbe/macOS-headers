//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INCExtensionConnection;

@interface INCAppProxy : NSObject
{
    INCExtensionConnection *_connection;
}

+ (BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak INCExtensionConnection *_connection; // @synthesize _connection;
- (id)_initWithConnection:(id)arg1;
- (void)launchAppInBackground:(BOOL)arg1 restrictAppsToCarPlay:(BOOL)arg2 userActivityIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)launchAppInBackground:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

