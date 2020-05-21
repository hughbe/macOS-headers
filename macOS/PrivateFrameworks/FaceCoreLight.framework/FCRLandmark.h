//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCRLandmark : NSObject
{
    NSString *type;
    unsigned long long pointCount;
    struct CGPoint *points;
}

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;
@property(readonly) struct CGPoint *points; // @synthesize points;
@property(readonly) unsigned long long pointCount; // @synthesize pointCount;
@property(readonly) NSString *type; // @synthesize type;
- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;

@end

