//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRAppleScriptColor : NSObject
{
    NSArray *_colors;
}

+ (id)scriptingRGBColorWithDescriptor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)scriptingRGBColorDescriptor;

@end

