//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Lookup/LUTextAccessor.h>

__attribute__((visibility("hidden")))
@interface LUAccessibilityTextAccessor : LUTextAccessor
{
    id _accessibilityElement;
}

+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (id)termForRange:(struct _NSRange)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (void)dealloc;

@end

