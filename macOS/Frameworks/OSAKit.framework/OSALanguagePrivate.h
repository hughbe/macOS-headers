//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OSAComponentInstance;

@interface OSALanguagePrivate : NSObject
{
    OSAComponentInstance *_genericComponentInstance;
    struct ComponentRecord *_component;
    struct ComponentInstanceRecord *_instance;
    struct ComponentDescription _description;
    NSString *_name;
    NSString *_info;
    NSString *_version;
}

- (void)dealloc;
- (id)initWithComponent:(struct ComponentRecord *)arg1;

@end

