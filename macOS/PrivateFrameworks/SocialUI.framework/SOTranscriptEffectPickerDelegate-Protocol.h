//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class NSString, SOTranscriptEffectPicker;

@protocol SOTranscriptEffectPickerDelegate <NSObject>
- (void)effectPickerWasCancelled:(SOTranscriptEffectPicker *)arg1;
- (void)effectPicker:(SOTranscriptEffectPicker *)arg1 didPickEffect:(NSString *)arg2;
@end

