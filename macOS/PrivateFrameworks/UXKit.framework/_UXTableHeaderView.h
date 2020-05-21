//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionReusableView.h>

@class NSBox, UXLabel, UXView;

@interface _UXTableHeaderView : UXCollectionReusableView
{
    BOOL _floating;
    UXView *_contentView;
    UXLabel *_titleLabel;
    NSBox *_separator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSBox *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) UXLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UXView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isFloating) BOOL floating; // @synthesize floating=_floating;
- (void)mouseDown:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

