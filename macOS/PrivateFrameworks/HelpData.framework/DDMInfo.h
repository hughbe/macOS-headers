//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpData/DDMObject.h>

@class NSArray, NSString;

@interface DDMInfo : DDMObject
{
    NSArray *_platforms;
    NSArray *_versions;
    NSString *_locale;
}

- (void).cxx_destruct;
@property(readonly) NSString *locale; // @synthesize locale=_locale;
@property(readonly) NSArray *versions; // @synthesize versions=_versions;
@property(readonly) NSArray *platforms; // @synthesize platforms=_platforms;

@end

