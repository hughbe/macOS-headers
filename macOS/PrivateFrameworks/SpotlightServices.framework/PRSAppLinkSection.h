//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/PRSBaseCardSection.h>

@class NSImage, NSString;

@interface PRSAppLinkSection : PRSBaseCardSection
{
    int _imageAlign;
    NSImage *_image;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)initWithSFAppLink:(id)arg1;

@end

