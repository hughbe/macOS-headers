//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary;

@protocol VCSecurityEventHandler <NSObject>
- (void)resetDecryptionTimeout;
- (BOOL)handleEncryptionInfoChange:(NSDictionary *)arg1;
@end

