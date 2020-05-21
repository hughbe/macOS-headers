//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUICommonAssetStorage, CUINamedImageDescription, CUINamedRenditionInfo, NSArray, NSDictionary, NSString;

@protocol CUIStructuredThemeStorage2
- (unsigned short)localizationIdentifierForName:(NSString *)arg1;
- (NSDictionary *)localizations;
- (NSDictionary *)appearances;
- (NSString *)nameForAppearanceIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(NSString *)arg1;
- (NSArray *)imagesWithName:(NSString *)arg1;
- (NSArray *)allImageNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(NSString *)arg1;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;

@optional
- (CUINamedRenditionInfo *)renditionInfoForIdentifier:(unsigned short)arg1;
- (CUICommonAssetStorage *)themeStore;
- (NSString *)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (void)removeImageNamed:(NSString *)arg1 withDescription:(CUINamedImageDescription *)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(NSString *)arg2 andDescription:(CUINamedImageDescription *)arg3;
@end

