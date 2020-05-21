//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface KHLayoutRect : NSObject
{
    unsigned long long _availableTypes;
    struct CGRect _rect;
}

+ (id)layoutRectWithRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long availableTypes; // @synthesize availableTypes=_availableTypes;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (BOOL)availableForTypes:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGRect KHCGRectValue;
@property(readonly, nonatomic) struct CGRect CGRectValue;
@property(readonly, nonatomic) NSValue *rectValue;
- (id)initWithRect:(struct CGRect)arg1;

@end

