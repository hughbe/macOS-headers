//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class MKLocalSearchCompleter, NSError;

@protocol MKLocalSearchCompleterDelegate <NSObject>

@optional
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

