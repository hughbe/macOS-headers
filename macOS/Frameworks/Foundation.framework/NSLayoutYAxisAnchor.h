//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutYAxisAnchor : NSLayoutAnchor
{
}

- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (BOOL)validateOtherAttribute:(long long)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)distanceTo:(id)arg1;
- (id)offsetTo:(id)arg1;
- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorWithOffsetToAnchor:(id)arg1;

@end

