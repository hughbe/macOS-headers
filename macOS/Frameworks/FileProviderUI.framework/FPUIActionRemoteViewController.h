//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : NSRemoteViewController
{
    id <FPUIActionRemoteViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FPUIActionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end

