//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/NSObject-Protocol.h>

@class CoreDAVTaskGroup, NSError;

@protocol CoreDAVTaskGroupDelegate <NSObject>

@optional
- (void)taskGroup:(CoreDAVTaskGroup *)arg1 didFinishWithError:(NSError *)arg2;
@end

