//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVRCAnalytics : NSObject
{
}

+ (id)sharedInstance;
- (void)logSessionStatistics:(id)arg1;
- (void)logShortcutActionRunWithType:(id)arg1;
- (id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3;
- (void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3;
- (id)_spinnerShownDictionaryFor:(id)arg1;
- (void)logSearchingSpinnerShown;
- (void)logConnectingSpinnerShown:(id)arg1;
- (id)_presentationSourceEventDictionaryFor:(id)arg1;
- (void)logPresentationFrom:(id)arg1;

@end

