//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface GEOPNRStringsFileReader : NSObject
{
    NSArray *_supportedLanguages;
    NSDictionary *_offsetForLang;
    NSData *_stringsFile;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSData *stringsFile; // @synthesize stringsFile=_stringsFile;
@property(readonly, retain, nonatomic) NSDictionary *offsetForLang; // @synthesize offsetForLang=_offsetForLang;
@property(readonly, retain, nonatomic) NSArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
- (id)stringForLang:(id)arg1 withId:(unsigned int)arg2;
- (id)initWithFile:(id)arg1;

@end

