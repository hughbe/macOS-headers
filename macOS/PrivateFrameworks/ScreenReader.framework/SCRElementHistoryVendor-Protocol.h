//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCRElement, SCRUIElement;
@protocol SCRElementHistoryVendor;

@protocol SCRElementHistoryVendor
- (id <SCRElementHistoryVendor>)parentVendor;
- (void)flushElementHistory;
- (SCRUIElement *)lastNavigatedValidUIElement;
- (SCRUIElement *)removeLastUIElementFromHistory;
- (void)addElementToHistory:(SCRElement *)arg1;
@end

