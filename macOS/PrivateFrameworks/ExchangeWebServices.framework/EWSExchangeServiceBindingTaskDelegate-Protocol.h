//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/NSObject-Protocol.h>

@class EWSExchangeServiceBindingTask, NSError;

@protocol EWSExchangeServiceBindingTaskDelegate <NSObject>

@optional
- (void)exchangeServiceBindingTaskCompleted:(EWSExchangeServiceBindingTask *)arg1;
- (void)exchangeServiceBindingTask:(EWSExchangeServiceBindingTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)exchangeServiceBindingTask:(EWSExchangeServiceBindingTask *)arg1 didReceiveResponse:(id)arg2;
@end

