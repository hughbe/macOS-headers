//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETMessageHeaderReader : NSObject
{
}

+ (double)sendTimeInArchive:(id)arg1;
+ (void)getSendTime:(double *)arg1 type:(unsigned short *)arg2 inArchive:(id)arg3;
+ (unsigned short)messageTypeInArchive:(id)arg1;
+ (id)identifierInArchive:(id)arg1;

@end

