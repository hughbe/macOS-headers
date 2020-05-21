//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject
{
    NSMutableDictionary *_mapProtectionClassToBundleIdToItem;
    NSMutableArray *_sectionCSItems;
    NSObject<OS_dispatch_queue> *_countQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *countQueue; // @synthesize countQueue=_countQueue;
@property(retain) NSMutableArray *sectionCSItems; // @synthesize sectionCSItems=_sectionCSItems;
@property(retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem; // @synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem;
- (id)init;

@end

