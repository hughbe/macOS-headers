//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSByteCountFormatter, NSString;

@interface SMSizeFormatter : NSFormatter
{
    NSString *_formatString;
    NSByteCountFormatter *_numberFormatter;
}

- (void).cxx_destruct;
@property(retain) NSByteCountFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain) NSString *formatString; // @synthesize formatString=_formatString;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithPrefixString:(id)arg1 localeIdentifier:(id)arg2;

@end

