//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABTracedLogger : NSObject
{
}

- (void)traceMessageOnLog:(id)arg1 withMessage:(struct __asl_object_s *)arg2;
- (void)traceKeyValuePairsOnLog:(id)arg1 withMessage:(struct __asl_object_s *)arg2;
- (void)traceLog:(id)arg1 withMessage:(struct __asl_object_s *)arg2;
- (void)traceLog:(id)arg1;

@end

