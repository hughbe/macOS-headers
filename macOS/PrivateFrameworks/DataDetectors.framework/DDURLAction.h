//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectors/DDAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDURLAction : DDAction
{
    NSString *_replacementForSpaces;
    NSString *_url;
}

+ (id)urlFromTemplateString:(id)arg1 result:(struct __DDResult *)arg2 replacementForSpaces:(id)arg3;
- (void).cxx_destruct;
- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (id)initWithDict:(id)arg1 bundle:(id)arg2;

@end

