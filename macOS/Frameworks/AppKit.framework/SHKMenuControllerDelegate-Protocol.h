//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SHKSharingService, SHKSharingServicePicker;

@protocol SHKMenuControllerDelegate <NSObject>

@optional
- (void)sharingServicePicker:(SHKSharingServicePicker *)arg1 didChooseSharingService:(SHKSharingService *)arg2;
- (id <SHKSharingServiceDelegate>)sharingServicePicker:(SHKSharingServicePicker *)arg1 delegateForSharingService:(SHKSharingService *)arg2;
- (NSArray *)sharingServicePicker:(SHKSharingServicePicker *)arg1 recentSharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
- (NSArray *)sharingServicePicker:(SHKSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 mask:(unsigned long long)arg3 proposedSharingServices:(NSArray *)arg4;
- (NSArray *)sharingServicePicker:(SHKSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
@end

