//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPropertyListFilter : NSObject
{
}

+ (BOOL)canEncodeInPropertyList:(id)arg1;
+ (id)filterPropertyListNoData:(id)arg1;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyList:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterArray:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

