//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject
{
    BOOL _shouldForceApplePay;
    BOOL _shouldForcePeerPayment;
    NSMutableArray *_completionHandlers;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldForcePeerPayment; // @synthesize shouldForcePeerPayment=_shouldForcePeerPayment;
@property(nonatomic) BOOL shouldForceApplePay; // @synthesize shouldForceApplePay=_shouldForceApplePay;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
- (id)init;

@end

