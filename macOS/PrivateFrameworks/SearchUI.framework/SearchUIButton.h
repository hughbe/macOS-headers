//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton
{
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (BOOL)allowsVibrancy;
- (void)resetCursorRects;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)updateWithType:(unsigned long long)arg1;
- (BOOL)isPlayButton;
- (id)initWithType:(unsigned long long)arg1;

@end

