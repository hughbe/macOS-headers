//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaColorOrGradientInterface-Protocol.h>

@class NSDictionary, NSString;

@interface CCVegaColorOrGradient : NSObject <CCVegaColorOrGradientInterface>
{
    NSString *color;
    NSDictionary *gradient;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *gradient; // @synthesize gradient;
@property(retain) NSString *color; // @synthesize color;
@property(readonly) BOOL isGradient;
@property(readonly) BOOL isColor;
- (id)initWithJSValue:(id)arg1;

@end

