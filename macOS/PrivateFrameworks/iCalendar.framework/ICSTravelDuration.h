//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class ICSDuration, NSString;

@interface ICSTravelDuration : ICSProperty
{
}

- (BOOL)alwaysHasParametersToSerialize;
@property(retain, nonatomic) ICSDuration *duration;
@property(retain, nonatomic) NSString *transparency;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;

@end

