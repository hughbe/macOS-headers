//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAProgressHandler : NSObject
{
    unsigned long long _notificationInterval;
    NSMutableArray *_callBackArray;
}

@property(readonly, nonatomic) NSMutableArray *callBackArray; // @synthesize callBackArray=_callBackArray;
@property(nonatomic) unsigned long long notificationInterval; // @synthesize notificationInterval=_notificationInterval;
- (void)dealloc;
- (void)addCallBack:(CDUnknownBlockType)arg1;
- (id)initWithCallBack:(CDUnknownBlockType)arg1;

@end

