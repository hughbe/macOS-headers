//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISEffect-Protocol.h>

@class ISColor, NSString;

__attribute__((visibility("hidden")))
@interface ISBorderEffect : NSObject <ISEffect>
{
    ISColor *_color;
    double _lineWidth;
}

- (void).cxx_destruct;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) ISColor *color; // @synthesize color=_color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

