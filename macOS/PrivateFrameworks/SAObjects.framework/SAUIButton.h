//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUIButton : SAAceView
{
}

+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)button;
@property(retain, nonatomic) SAUIColor *textColor;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *secondaryText;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SAUIColor *backgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

