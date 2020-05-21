//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutDimension.h>

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray;

@interface _NSCompositeLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutDimension *_firstLayoutDimension;
    double _secondLayoutDimensionMultiplier;
    NSLayoutDimension *_secondLayoutDimension;
}

@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2 times:(double)arg3;

@end

