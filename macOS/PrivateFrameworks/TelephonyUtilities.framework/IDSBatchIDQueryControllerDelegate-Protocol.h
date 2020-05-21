//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class IDSBatchIDQueryController, NSDictionary, NSError, NSString;

@protocol IDSBatchIDQueryControllerDelegate <NSObject>
- (void)batchQueryController:(IDSBatchIDQueryController *)arg1 updatedDestinationsStatus:(NSDictionary *)arg2 onService:(NSString *)arg3 error:(NSError *)arg4;

@optional
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
@end

