//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/CalTruthFileMethod-Protocol.h>

@class NSString;

@interface CalTruthFileRemove : NSObject <CalTruthFileMethod>
{
    BOOL _isDirectory;
    NSString *_path;
}

+ (id)methodWithPath:(id)arg1 isDirectory:(BOOL)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)main;
- (id)initWithPath:(id)arg1 isDirectory:(BOOL)arg2;

@end

