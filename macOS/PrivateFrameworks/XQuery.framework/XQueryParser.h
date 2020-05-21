//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, XQueryParsedModule;

__attribute__((visibility("hidden")))
@interface XQueryParser : NSObject
{
    NSMutableArray *_errors;
    NSString *_source;
    NSArray *_sourceLines;
    const char *_utf8String;
    long long _length;
    unsigned long long _position;
    XQueryParsedModule *_parsedModule;
}

+ (id)parserWithSource:(id)arg1;
+ (void)initialize;
+ (id)currentParser;
- (id)parsedModule;
- (id)sourceLine:(long long)arg1;
- (id)errors;
- (id)source;
- (id)initWithSource:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (long long)readChars:(unsigned long long)arg1 toBuffer:(char *)arg2;
- (void)parse;
- (void)setError:(id)arg1;

@end

