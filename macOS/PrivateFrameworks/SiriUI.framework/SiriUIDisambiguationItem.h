//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImageView, NSString;

@interface SiriUIDisambiguationItem : NSObject
{
    BOOL _showsFavoriteStar;
    NSString *_title;
    NSString *_subtitle;
    NSString *_headingText;
    NSString *_extraDisambiguationText;
    NSString *_extraDisambiguationSubText;
    NSImageView *_imageView;
    struct _NSRange _titleBoldedRange;
}

+ (id)disambiguationItem;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsFavoriteStar; // @synthesize showsFavoriteStar=_showsFavoriteStar;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct _NSRange titleBoldedRange; // @synthesize titleBoldedRange=_titleBoldedRange;
@property(copy, nonatomic) NSString *extraDisambiguationSubText; // @synthesize extraDisambiguationSubText=_extraDisambiguationSubText;
@property(copy, nonatomic) NSString *extraDisambiguationText; // @synthesize extraDisambiguationText=_extraDisambiguationText;
@property(copy, nonatomic) NSString *headingText; // @synthesize headingText=_headingText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

