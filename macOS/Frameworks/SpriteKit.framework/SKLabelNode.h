//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSAttributedString, NSColor, NSString;

@interface SKLabelNode : SKNode
{
    struct SKCLabelNode *_skcLabelNode;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithAttributedText:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_labelNodeWithFontNamed:(id)arg1;
- (id)description;
- (id)attributedString;
@property(copy, nonatomic) NSString *text;
- (struct CGRect)frame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(nonatomic) long long blendMode;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) NSColor *color;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) NSColor *fontColor;
@property(nonatomic) double fontSize;
@property(copy, nonatomic) NSString *fontName;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(nonatomic) unsigned long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long horizontalAlignmentMode;
@property(nonatomic) long long verticalAlignmentMode;
- (id)initWithFontNamed:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_initialize;
- (id)init;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (void)setNSFont:(id)arg1;
- (void)setFont:(struct __CTFont *)arg1;
- (id)_getTextSprites;
- (id)accessibilityLabel;

@end

