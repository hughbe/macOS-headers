//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskForTimeApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
{
    NSString *_parentName;
    NSString *_requestedResourceName;
    double _amountGranted;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double amountGranted; // @synthesize amountGranted=_amountGranted;
@property(copy, nonatomic) NSString *requestedResourceName; // @synthesize requestedResourceName=_requestedResourceName;
@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 amountGranted:(double)arg4;

@end

