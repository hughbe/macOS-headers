//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/NSTextFieldDelegate-Protocol.h>

@class NSNotification;

@protocol NSComboBoxDelegate <NSTextFieldDelegate>

@optional
- (void)comboBoxSelectionIsChanging:(NSNotification *)arg1;
- (void)comboBoxSelectionDidChange:(NSNotification *)arg1;
- (void)comboBoxWillDismiss:(NSNotification *)arg1;
- (void)comboBoxWillPopUp:(NSNotification *)arg1;
@end

