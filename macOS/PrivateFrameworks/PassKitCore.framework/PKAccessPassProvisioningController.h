//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKAccessPassProvisioningCoordinator;
@protocol PKAccessPassProvisioningControllerDelegate;

@interface PKAccessPassProvisioningController : NSObject
{
    PKAccessPassProvisioningCoordinator *_coordinator;
}

+ (BOOL)canAddAccessPassWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKAccessPassProvisioningControllerDelegate> delegate;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

