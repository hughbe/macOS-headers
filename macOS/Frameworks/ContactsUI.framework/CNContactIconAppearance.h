//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface CNContactIconAppearance : NSObject
{
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
}

+ (id)appearanceWithBackgroundStyle:(long long)arg1 selected:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;

@end

