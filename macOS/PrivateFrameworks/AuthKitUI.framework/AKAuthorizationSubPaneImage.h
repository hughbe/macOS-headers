//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSImage, NSImageView;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane
{
    NSImageView *_imageView;
}

+ (id)imageViewWithImage:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
@property(copy) NSImage *image;
- (id)initWithImage:(id)arg1;

@end

