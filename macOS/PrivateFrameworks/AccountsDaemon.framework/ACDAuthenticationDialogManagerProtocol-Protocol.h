//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class NSDictionary;

@protocol ACDAuthenticationDialogManagerProtocol <NSObject>
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(NSDictionary *)arg2;
- (void)contextForAuthenticationDialog:(void (^)(NSURL *, NSString *, NSString *, NSString *, NSString *))arg1;
@end

