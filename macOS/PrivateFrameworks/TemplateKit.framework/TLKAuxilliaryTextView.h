//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSString, TLKFormattedText, TLKLabel, TLKStackView, TLKTextAreaView;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate>
{
    TLKFormattedText *_topText;
    TLKFormattedText *_middleText;
    TLKFormattedText *_bottomText;
    TLKLabel *_topLabel;
    TLKLabel *_middleLabel;
    TLKLabel *_bottomLabel;
    TLKTextAreaView *_textAreaViewForAlignment;
}

+ (BOOL)formattedTextHasTextContent:(id)arg1;
+ (id)largeMiddleTextFont;
- (void).cxx_destruct;
@property(retain, nonatomic) TLKTextAreaView *textAreaViewForAlignment; // @synthesize textAreaViewForAlignment=_textAreaViewForAlignment;
@property(retain, nonatomic) TLKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) TLKLabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) TLKLabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) TLKFormattedText *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) TLKFormattedText *middleText; // @synthesize middleText=_middleText;
@property(retain, nonatomic) TLKFormattedText *topText; // @synthesize topText=_topText;
- (id)bottomLabelString;
- (id)middleLabelString;
- (id)topLabelString;
- (id)bottomLabelFont;
- (id)middleLabelFont;
- (void)generateAndSizeTextAreaViewIfNeeded;
- (void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)observedPropertiesChanged;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

