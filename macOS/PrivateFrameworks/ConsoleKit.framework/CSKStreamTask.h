//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSKStreamTaskOperation;

@interface CSKStreamTask : NSObject
{
    CSKStreamTaskOperation *_parentOperation;
}

+ (id)name;
- (void).cxx_destruct;
@property(nonatomic) __weak CSKStreamTaskOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (CDUnknownBlockType)handler;

@end

