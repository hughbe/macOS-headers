//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSColor;

@interface ICTintedLayer : CALayer
{
    NSColor *_tintColor;
    id _originalContents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id originalContents; // @synthesize originalContents=_originalContents;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)updateContents;
- (void)setContents:(id)arg1;

@end

