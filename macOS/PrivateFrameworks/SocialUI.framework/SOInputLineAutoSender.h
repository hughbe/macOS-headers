//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOInputLine;

@interface SOInputLineAutoSender : NSObject
{
    SOInputLine *_inputLine;
}

@property SOInputLine *inputLine; // @synthesize inputLine=_inputLine;
- (void)_timerFired;
- (id)initWithSOInputLine:(id)arg1;

@end

