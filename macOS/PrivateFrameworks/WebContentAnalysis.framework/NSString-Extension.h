//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (Extension)
+ (id)stringFromArray:(id)arg1;
+ (id)ignorableCharacterSet;
- (id)stringWithMostSignificatDomainPart;
- (BOOL)_isIPv4DomainAddress;
- (id)stringByProperlyFixingPercentEscapes;
- (long long)numericCompare:(id)arg1;
- (id)fuzzyStringWithWordLength:(int)arg1;
- (id)stringByConvertingSpacesInHTMLSpaces;
- (id)stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingWord:(id)arg1;
- (struct _NSRange)rangeOfWord:(id)arg1;
- (BOOL)containsWord:(id)arg1;
- (BOOL)containsString:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)containsString:(id)arg1;
@end

