//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject
{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

@property(nonatomic) long long exportCount; // @synthesize exportCount=_exportCount;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)description;
- (void)dealloc;
- (id)init;

@end

