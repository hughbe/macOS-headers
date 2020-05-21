//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class NSAttributedString, NSColor, NSString;

@interface MOTextLayer : CATextLayer
{
    NSString *_backingString;
    NSAttributedString *_backingAttributedString;
    NSString *_backingPlaceholderString;
    NSAttributedString *_backingPlaceholderAttributedString;
    NSColor *_placeholderColor;
    BOOL _enableImplicitAnimations;
    NSColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) BOOL enableImplicitAnimations; // @synthesize enableImplicitAnimations=_enableImplicitAnimations;
- (void)setFont:(void *)arg1;
@property(copy, nonatomic) NSAttributedString *placeholderAttributedString;
@property(copy, nonatomic) NSString *placeholderString;
@property(copy, nonatomic) NSAttributedString *attributedStringValue;
@property(copy, nonatomic) NSString *stringValue;
- (void)_displayPlaceholderStringIfNeeded;
- (id)_attributes;
- (unsigned long long)_lineBreakModeFromTruncationMode:(id)arg1;
- (long long)_textAlignmentFromAlignmentMode:(id)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

