//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMKCandidateGroupViewUnit : NSObject
{
    double _position;
    NSString *_title;
}

+ (id)groupViewUnitWithTitle:(id)arg1 position:(double)arg2;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double position; // @synthesize position=_position;
- (void)dealloc;

@end

