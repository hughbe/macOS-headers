//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABSuggestedValueViewController, CNLabeledValue;

@protocol ABSuggestedValueViewControllerDelegate <NSObject>
- (void)confirmationViewController:(ABSuggestedValueViewController *)arg1 didRejectLabeledValue:(CNLabeledValue *)arg2;
- (void)confirmationViewController:(ABSuggestedValueViewController *)arg1 didConfirmLabeledValue:(CNLabeledValue *)arg2;
@end

