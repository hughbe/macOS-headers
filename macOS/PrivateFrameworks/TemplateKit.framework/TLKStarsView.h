//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSFont;

__attribute__((visibility("hidden")))
@interface TLKStarsView : TLKStackView
{
    double _starRating;
    NSFont *_font;
    double _currentStarRating;
}

- (void).cxx_destruct;
@property(nonatomic) double currentStarRating; // @synthesize currentStarRating=_currentStarRating;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void)updateStarImages;
- (id)init;

@end

