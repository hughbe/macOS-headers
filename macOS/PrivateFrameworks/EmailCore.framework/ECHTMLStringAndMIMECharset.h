//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ECMIMECharset;

@interface ECHTMLStringAndMIMECharset : NSObject
{
    NSString *_string;
    id <ECMIMECharset> _charset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ECMIMECharset> charset; // @synthesize charset=_charset;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithString:(id)arg1 charset:(id)arg2;

@end

