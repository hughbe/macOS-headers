//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCVegaCGFontProperties : NSObject
{
    NSString *fontFamily;
    NSString *fontSize;
    NSString *fontVariant;
    NSString *fontWeight;
    NSString *fontStyle;
    NSString *lineHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lineHeight; // @synthesize lineHeight;
@property(retain, nonatomic) NSString *fontStyle; // @synthesize fontStyle;
@property(retain, nonatomic) NSString *fontWeight; // @synthesize fontWeight;
@property(retain, nonatomic) NSString *fontVariant; // @synthesize fontVariant;
@property(retain, nonatomic) NSString *fontSize; // @synthesize fontSize;
@property(retain, nonatomic) NSString *fontFamily; // @synthesize fontFamily;
- (id)initWithCSSFontString:(id)arg1;

@end

