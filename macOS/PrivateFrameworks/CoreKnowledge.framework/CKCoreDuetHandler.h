//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKCoreDuetHandler : NSObject
{
}

+ (void)removeAllFromStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)duetKnowledgeStore;

@end

