//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCImportFontCacheKey : NSObject
{
    int _size;
    NSString *_name;
}

+ (id)createFontCacheKeyForName:(id)arg1 size:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) int size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

