//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServicesUI)
+ (id)ams_unescapedStringForString:(id)arg1;
- (id)ams_valueForQueryParameter:(id)arg1;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_URLByAppendingQueryParameters:(id)arg1;
@property(readonly) NSDictionary *ams_parameters;
@end

