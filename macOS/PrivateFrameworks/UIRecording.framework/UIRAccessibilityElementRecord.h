//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIRecording/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface UIRAccessibilityElementRecord : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_properties;
}

+ (BOOL)supportsSecureCoding;
+ (id)accessibilityStackWithStartingElement:(id)arg1;
- (void)dealloc;
- (struct CGSize)size;
- (struct CGPoint)position;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1 withParentAXUIElement:(struct __AXUIElement *)arg2;
- (id)objectForAXValue:(void *)arg1;

@end

