//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSString, NSURL;

@protocol EKProtocolSharee <EKProtocolObject>
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSURL *URL;
- (NSString *)accessLevel;
- (NSString *)status;
@end

