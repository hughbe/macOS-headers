//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class NSArray, NSColor, NSDate, NSDictionary, NSFont, NSImage, NSString;

@protocol SOTranscriptTheme <NSObject>
@property(readonly, nonatomic) struct CGSize defaultCollectionViewItemSize;
@property(readonly, nonatomic) NSColor *defaultCollectionViewItemBackgroundColor;
@property(readonly, nonatomic) NSDictionary *effectControlItemStringAttributes;
@property(readonly, nonatomic) NSDictionary *defaultStatusItemStringAttributes;
@property(readonly, nonatomic) NSFont *balloonTextFont;
- (NSString *)stringForMessageStatusType:(long long)arg1 statusDate:(NSDate *)arg2 attributionType:(long long)arg3;
- (NSImage *)balloonMaskImageForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1 userInterfaceLayoutDirection:(long long)arg2 outCenterRect:(struct CGRect *)arg3;
- (struct NSEdgeInsets)insetsForTextBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (struct NSEdgeInsets)insetsForBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (NSDictionary *)balloonTextFontWeightAttributes;
- (NSArray *)gradientBalloonColorsForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (NSColor *)balloonTextColorForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (NSColor *)balloonColorForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
@end

