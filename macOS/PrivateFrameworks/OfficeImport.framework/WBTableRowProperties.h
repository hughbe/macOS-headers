//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableRowProperties : NSObject
{
}

+ (void)write:(id)arg1 properties:(id)arg2 wrdProperties:(struct WrdTableProperties *)arg3 tracked:(struct WrdTableProperties *)arg4;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;
+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2;

@end

