//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPrintOperationPrintEventRetrofitInfo : NSObject
{
    NSDictionary *printSettings;
    BOOL showPrintPanel;
    id sender;
    id delegate;
    SEL didPrintSelector;
    void *contextInfo;
}

- (void)dealloc;
- (id)initWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 sender:(id)arg3 delegate:(id)arg4 didPrintSelector:(SEL)arg5 contextInfo:(void *)arg6;

@end

