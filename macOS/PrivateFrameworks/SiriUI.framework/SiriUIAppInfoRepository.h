//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriUIAppInfoRepository : NSObject
{
}

- (struct __CFDictionary *)_copyLsDictionaryOfAppAtIndex:(long long)arg1 inArray:(struct __CFArray *)arg2;
- (int)_pidWithLSDictionary:(struct __CFDictionary *)arg1;
- (id)_appInfoAtIndex:(long long)arg1 ofArray:(struct __CFArray *)arg2;
- (id)frontmostAppsThatAreNotSiri;

@end

