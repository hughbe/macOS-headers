//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLContentChanges : NSObject
{
    NSMutableArray *_container;
    NSMutableArray *_updatedContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updatedContent; // @synthesize updatedContent=_updatedContent;
@property(retain, nonatomic) NSMutableArray *container; // @synthesize container=_container;
- (void)cleanupState;

@end

