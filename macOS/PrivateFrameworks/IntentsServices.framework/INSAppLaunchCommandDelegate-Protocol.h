//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsServices/NSObject-Protocol.h>

@class SABaseCommand;

@protocol INSAppLaunchCommandDelegate <NSObject>
- (void (^)(BOOL, NSError *))completionHandlerForAppLaunchCommand:(SABaseCommand *)arg1 withCompletion:(void (^)(id <SAAceCommand>, NSError *))arg2;
@end

