//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCGestureFinger : NSObject
{
    unsigned long long _identifier;
    struct CGPoint _location;
    double _pressure;
}

- (long long)type;
- (double)pressure;
- (struct CGPoint)location;
- (unsigned long long)identifier;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;

@end

