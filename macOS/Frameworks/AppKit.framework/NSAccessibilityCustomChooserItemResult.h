//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSValue;
@protocol NSObject;

@interface NSAccessibilityCustomChooserItemResult : NSObject
{
    id <NSObject> _targetElement;
    NSValue *_targetRange;
    NSString *_descriptionOverride;
}

@property(copy, nonatomic) NSString *descriptionOverride; // @synthesize descriptionOverride=_descriptionOverride;
@property(retain, nonatomic) NSValue *targetRange; // @synthesize targetRange=_targetRange;
@property(nonatomic) __weak id <NSObject> targetElement;
- (void)dealloc;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;

@end

