//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface IMKLayoutLine : NSObject
{
    NSString *_groupName;
    NSMutableArray *_layoutUnitsInternal;
}

@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSMutableArray *layoutUnitsInternal; // @synthesize layoutUnitsInternal=_layoutUnitsInternal;
@property(readonly, nonatomic) NSArray *layoutUnits;
- (void)addLayoutUnit:(id)arg1;
- (void)dealloc;

@end

