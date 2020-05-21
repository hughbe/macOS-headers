//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class MKViewWithHairline, NSColor;

@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    MKViewWithHairline *_separatorView;
}

- (void).cxx_destruct;
@property(nonatomic) double trailingSeparatorInset;
@property(nonatomic) double leadingSeparatorInset;
@property(retain, nonatomic) NSColor *separatorColor;
@property(nonatomic) double rightSeparatorInset;
@property(nonatomic) double leftSeparatorInset;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

