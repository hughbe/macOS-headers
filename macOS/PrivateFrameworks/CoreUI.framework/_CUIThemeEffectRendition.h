//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

__attribute__((visibility("hidden")))
@interface _CUIThemeEffectRendition : CUIThemeRendition
{
    const struct _cuieffectdata *effectData;
    CUIShapeEffectPreset *_effectPreset;
    float _minimumShadowSpread;
}

- (void)_setStructuredThemeStore:(id)arg1;
- (id)effectPreset;
- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;

@end

