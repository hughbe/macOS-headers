//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEONavigation, GEONavigationGuidanceState, NSDate;

@protocol GEONavigationObserver <NSObject>

@optional
- (void)navigation:(GEONavigation *)arg1 didChangeGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigation:(GEONavigation *)arg1 didChangeShouldSuppressCellularDataAlerts:(BOOL)arg2;
- (void)navigationDidChangeNavigationState:(GEONavigation *)arg1;
- (void)navigation:(GEONavigation *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingTime:(double)arg3;
@end

