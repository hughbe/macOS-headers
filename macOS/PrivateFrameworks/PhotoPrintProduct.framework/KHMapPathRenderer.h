//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/MapPathRendererProtocol-Protocol.h>

@class KHEnvironment, NSArray, NSLock, NSMutableDictionary, NSString;

@interface KHMapPathRenderer : NSObject <MapPathRendererProtocol>
{
    NSArray *_availableConfigurationIds;
    NSMutableDictionary *_configurationInfoCache;
    KHEnvironment *_environment;
    NSMutableDictionary *_treatmentLayerRendererCache;
    NSLock *_renderLock;
}

+ (BOOL)_isThemeIdForTexturesAndShadowsEnabled:(id)arg1;
+ (id)mapStyleConfigurationIdForThemeId:(id)arg1;
+ (id)themeIdForMapStyleConfigurationId:(id)arg1 texturesAndShadowsEnabled:(BOOL)arg2;
- (void)flushCaches;
- (id)_textColorForTextStyleKey:(unsigned long long)arg1 themeId:(id)arg2;
- (id)_textStyleForTextStyleKey:(unsigned long long)arg1 themeId:(id)arg2;
- (id)_treatmentForStyleKey:(unsigned long long)arg1 themeId:(id)arg2 quickRender:(BOOL)arg3;
- (id)_loadMapConfigurationInfoForId:(id)arg1;
- (id)_mapConfigurationInfoForThemeId:(id)arg1;
- (id)availableThemeIds;
- (unsigned long long)_convertMapTextVerticalAlignment:(unsigned long long)arg1;
- (unsigned long long)_convertMapTextHorizontalAlignment:(unsigned long long)arg1;
- (struct CGRect)_renderStringIntoContext:(struct CGContext *)arg1 string:(id)arg2 contextRect:(struct CGRect)arg3 contextRectScale:(double)arg4 anchor:(struct CGPoint)arg5 horizontalAlignment:(unsigned long long)arg6 verticalAlignment:(unsigned long long)arg7 textStyle:(id)arg8 textColor:(id)arg9 shouldDraw:(BOOL)arg10;
- (void)renderStringIntoContext:(struct CGContext *)arg1 string:(id)arg2 contextRect:(struct CGRect)arg3 contextRectScale:(double)arg4 anchor:(struct CGPoint)arg5 horizontalAlignment:(unsigned long long)arg6 verticalAlignment:(unsigned long long)arg7 themeId:(id)arg8 styleKey:(unsigned long long)arg9;
- (struct CGRect)textBoundsInContext:(struct CGContext *)arg1 string:(id)arg2 contextRect:(struct CGRect)arg3 contextRectScale:(double)arg4 anchor:(struct CGPoint)arg5 horizontalAlignment:(unsigned long long)arg6 verticalAlignment:(unsigned long long)arg7 themeId:(id)arg8 styleKey:(unsigned long long)arg9;
- (void)renderIntoContext:(struct CGContext *)arg1 contextRect:(struct CGRect)arg2 contextRectScale:(double)arg3 paths:(id)arg4 themeId:(id)arg5 styleKey:(unsigned long long)arg6 quickRender:(BOOL)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

