//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface DRCueFileParser : NSObject
{
    NSString *cuePath;
    NSMutableDictionary *burnInfo;
    NSMutableArray *trackInfoList;
    NSString *sourceFile;
    NSString *sourceKind;
    NSNumber *sourceLength;
    long long lastTrackIndex;
}

- (id)fullPathForAuxFile:(id)arg1;
- (id)trackInfoForIndex:(long long)arg1;
- (id)decodeDatatype:(id)arg1;
- (id)extractString:(id)arg1;
- (void)parseIndexData:(id)arg1 trackInfo:(id)arg2;
- (void)parseFlags:(id)arg1 trackInfo:(id)arg2;
- (void)parsePropertiesData:(id)arg1 trackInfo:(id)arg2;
- (long long)parseSourceFile:(id)arg1;
- (id)burnProperties;
- (id)cdText;
- (id)trackLayout;
- (BOOL)parse;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

