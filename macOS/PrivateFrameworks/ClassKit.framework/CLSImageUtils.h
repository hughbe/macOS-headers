//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@interface CLSImageUtils : CLSObject
{
}

+ (id)JPEGDataFromCGImage:(struct CGImage *)arg1 desiredMinimumDimension:(unsigned long long)arg2 desiredMaximumDimension:(unsigned long long)arg3 error:(id *)arg4;
+ (struct CGImage *)CGImageFromJPEGData:(id)arg1 error:(id *)arg2;
+ (id)JPEGDataFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;

@end

