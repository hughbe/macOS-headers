//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBCell : NSObject
{
}

+ (void)readXlCell:(struct XlCell *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (int)convertEDErrorValueEnumToXl:(int)arg1;
+ (int)convertXlErrorEnumToED:(int)arg1;
+ (int)convertXlCellTypeToED:(int)arg1;

@end

