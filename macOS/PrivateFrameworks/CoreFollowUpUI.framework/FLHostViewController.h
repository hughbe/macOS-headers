//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <CoreFollowUpUI/FLExtensionHostInterface-Protocol.h>

@class NSString;

@interface FLHostViewController : NSRemoteViewController <FLExtensionHostInterface>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

