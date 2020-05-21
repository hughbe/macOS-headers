//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GKInterface : NSObject
{
    NSNumber *_index;
    NSString *_bsdName;
    NSString *_type;
    unsigned int _priority;
}

+ (id)bsdNameForIndex:(id)arg1;
+ (id)interfaceWithInterfaceIndex:(id)arg1;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *bsdName; // @synthesize bsdName=_bsdName;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
- (id)description;
- (void)dealloc;

@end

