//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADBaseFontCollection : NSObject
{
    NSString *_latinFont;
    NSString *_eastAsianFont;
    NSString *_complexScriptFont;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *complexScriptFont; // @synthesize complexScriptFont=_complexScriptFont;
@property(copy, nonatomic) NSString *eastAsianFont; // @synthesize eastAsianFont=_eastAsianFont;
@property(copy, nonatomic) NSString *latinFont; // @synthesize latinFont=_latinFont;
- (BOOL)isEmpty;
- (BOOL)isEqualToBaseFontCollection:(id)arg1;
- (void)setBaseFont:(id)arg1 forId:(int)arg2;
- (id)baseFontForId:(int)arg1;

@end

