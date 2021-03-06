//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class KHTextStyle, NSString;

@interface KHConfigurationTextStyle : KHModel
{
    long long _configurationId;
    long long _textStyleId;
    NSString *_textStyleName;
    NSString *_designTag;
    long long _type;
    KHTextStyle *_textStyle;
}

+ (id)textStylesForConfiguration:(id)arg1 type:(unsigned long long)arg2;
- (id)textStyle;
- (void)setType:(long long)arg1;
- (void)cacheType:(long long)arg1;
- (long long)type;
- (void)setDesignTag:(id)arg1;
- (void)cacheDesignTag:(id)arg1;
- (id)designTag;
- (void)setTextStyleName:(id)arg1;
- (void)cacheTextStyleName:(id)arg1;
- (id)textStyleName;
- (void)setTextStyleId:(long long)arg1;
- (void)cacheTextStyleId:(long long)arg1;
- (long long)textStyleId;
- (void)setConfigurationId:(long long)arg1;
- (void)cacheConfigurationId:(long long)arg1;
- (long long)configurationId;
- (void)dealloc;

@end

