//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface PAEKeyerOMVertex : NSObject <NSSecureCoding>
{
    NSNumber *_lx;
    NSNumber *_mx;
    NSNumber *_rx;
    NSNumber *_bx;
    NSNumber *_ly;
    NSNumber *_my;
    NSNumber *_ry;
    NSNumber *_by;
}

+ (BOOL)supportsSecureCoding;
- (void)setBy:(id)arg1;
- (void)setRy:(id)arg1;
- (void)setMy:(id)arg1;
- (void)setLy:(id)arg1;
- (void)setBx:(id)arg1;
- (void)setRx:(id)arg1;
- (void)setMx:(id)arg1;
- (void)setLx:(id)arg1;
- (float)by;
- (float)ry;
- (float)my;
- (float)ly;
- (float)bx;
- (float)rx;
- (float)mx;
- (float)lx;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

