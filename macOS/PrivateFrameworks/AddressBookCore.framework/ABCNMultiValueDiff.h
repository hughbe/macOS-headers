//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ABCNMultiValueDiff : NSObject
{
    NSArray *_updates;
}

+ (id)emptyDiff;
- (id)description;
- (BOOL)isEmpty;
- (void)applyToABMutableMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithUpdates:(id)arg1;

@end

