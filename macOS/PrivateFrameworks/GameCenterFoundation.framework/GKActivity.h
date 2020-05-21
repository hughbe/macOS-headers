//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

@interface GKActivity : NSObject
{
    unsigned int _mode;
    NSString *_name;
    NSObject<OS_os_activity> *_parent;
    NSObject<OS_os_activity> *_activity;
}

+ (void)execute:(CDUnknownBlockType)arg1;
+ (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;
+ (id)named:(id)arg1;
+ (id)currentOrNew;
+ (id)detached;
+ (id)activity;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_os_activity> *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (id)named:(id)arg1;
- (id)child;
- (void)createActivity;
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;

@end

