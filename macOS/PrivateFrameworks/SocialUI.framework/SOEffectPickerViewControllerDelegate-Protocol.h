//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class NSString, SOEffectPickerViewController;

@protocol SOEffectPickerViewControllerDelegate <NSObject>
- (void)effectPickerViewControllerWasCancelled:(SOEffectPickerViewController *)arg1;
- (void)effectPickerViewController:(SOEffectPickerViewController *)arg1 didChooseEffect:(NSString *)arg2;
- (void)effectPickerViewController:(SOEffectPickerViewController *)arg1 didPreviewEffect:(NSString *)arg2;
@end

