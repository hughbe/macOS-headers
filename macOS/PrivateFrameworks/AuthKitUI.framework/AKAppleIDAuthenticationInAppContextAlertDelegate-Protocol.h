//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, NSError;

@protocol AKAppleIDAuthenticationInAppContextAlertDelegate <NSObject>
- (void)displayAlertForContext:(AKAppleIDAuthenticationInAppContext *)arg1 error:(NSError *)arg2 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg3;
@end

