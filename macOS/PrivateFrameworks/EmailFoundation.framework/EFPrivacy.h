//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFPrivacy : NSObject
{
}

+ (unsigned int)bucketMessageCount:(unsigned long long)arg1;
+ (id)fullyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2;
+ (long long)weeksSinceDate:(id)arg1;
+ (id)dateByRemovingTimeComponentsFromDate:(id)arg1;

@end

