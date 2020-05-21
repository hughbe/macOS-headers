//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TFileSizeFormatter : NSNumberFormatter
{
    NSString *_invalidSizeStr;
    unsigned long long _options;
}

+ (id)fileSizeFormatter;
- (void).cxx_destruct;
@property(retain) NSString *invalidSizeStr; // @synthesize invalidSizeStr=_invalidSizeStr;
- (id)numberFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
@property _Bool specialZeroHandling; // @dynamic specialZeroHandling;
@property _Bool sizeInBytes; // @dynamic sizeInBytes;
@property _Bool stableWidth; // @dynamic stableWidth;
- (void)dealloc;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

