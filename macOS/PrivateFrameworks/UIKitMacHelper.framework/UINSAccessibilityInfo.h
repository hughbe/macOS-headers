//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitMacHelper/UINSAccessibilityInfo-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSAccessibilityInfo : NSObject <UINSAccessibilityInfo>
{
    NSString *_accessibilityValue;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

