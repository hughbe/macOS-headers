//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSBrowserDropDestContext : NSObject
{
    long long targetColumn;
    long long targetRow;
    unsigned long long targetDropOperation;
    unsigned long long dragOperation;
    long long lastTargetRow;
    long long lastTargetColumn;
    unsigned long long lastDragOperationMask;
    unsigned long long lastDropOperation;
    BOOL lastOpInTopHalf;
}

- (id)init;

@end

