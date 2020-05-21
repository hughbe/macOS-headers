//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTrimView;

__attribute__((visibility("hidden")))
@interface AVTrimIndicatorAccessibilityElement : NSObject
{
    AVTrimView *_trimView;
    unsigned long long _part;
}

- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)accessibilityRect;
@property(readonly, nonatomic) unsigned long long part;
@property(readonly, nonatomic) AVTrimView *trimView;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTrimView:(id)arg1 part:(unsigned long long)arg2;
- (id)init;

@end

