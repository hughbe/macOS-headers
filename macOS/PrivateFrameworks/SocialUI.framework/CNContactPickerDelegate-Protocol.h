//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class CNContact, CNContactPicker, CNContactProperty;

@protocol CNContactPickerDelegate <NSObject>

@optional
- (void)contactPickerDidClose:(CNContactPicker *)arg1;
- (void)contactPickerWillClose:(CNContactPicker *)arg1;
- (void)contactPicker:(CNContactPicker *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;
- (void)contactPicker:(CNContactPicker *)arg1 didSelectContact:(CNContact *)arg2;
@end

