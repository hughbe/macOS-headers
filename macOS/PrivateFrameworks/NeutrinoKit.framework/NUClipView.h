//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSClipView.h>

@class NUViewGeometry;

@interface NUClipView : NSClipView
{
    BOOL _shouldCenterContent;
    NUViewGeometry *_geometry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NUViewGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) BOOL shouldCenterContent; // @synthesize shouldCenterContent=_shouldCenterContent;
- (struct CGRect)constrainBoundsRect:(struct CGRect)arg1;

@end

