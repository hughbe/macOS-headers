//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPCSSText-Protocol.h>
#import <LinkPresentation/LPHTMLAttributeText-Protocol.h>

__attribute__((visibility("hidden")))
@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText>
{
    double _value;
}

+ (id)zero;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (id)_lp_HTMLAttributeText;
- (id)_lp_CSSText;
- (id)initWithValue:(double)arg1;

@end

