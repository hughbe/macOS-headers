//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SocialUI/SOTranscriptTheme-Protocol.h>

@class NSColor, NSDictionary, NSFont, NSString;

@interface SODefaultTranscriptTheme : NSObject <SOTranscriptTheme>
{
}

+ (void)load;
@property(readonly, nonatomic) NSDictionary *defaultStatusItemStringAttributes;
@property(readonly, nonatomic) NSDictionary *effectControlItemStringAttributes;
- (id)stringForMessageStatusType:(long long)arg1 statusDate:(id)arg2 attributionType:(long long)arg3;
@property(readonly, nonatomic) struct CGSize defaultCollectionViewItemSize;
@property(readonly, nonatomic) NSColor *defaultCollectionViewItemBackgroundColor;
- (id)balloonMaskImageForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1 userInterfaceLayoutDirection:(long long)arg2 outCenterRect:(struct CGRect *)arg3;
- (struct NSEdgeInsets)insetsForBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (struct NSEdgeInsets)insetsForTextBalloonWithBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
@property(readonly, nonatomic) NSFont *balloonTextFont;
- (id)balloonTextColorForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (id)gradientBalloonColorsForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (id)balloonColorForBalloonDescriptor:(struct IMBalloonDescriptor_t)arg1;
- (id)balloonTextFontWeightAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

