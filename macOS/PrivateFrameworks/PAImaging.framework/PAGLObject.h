//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PAOpenGLDevice;

@interface PAGLObject : NSObject
{
    PAOpenGLDevice *_device;
    unsigned int _objectID;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_deleteOpenGLResourcesAsync;
- (void)deleteIfNeeded;
- (void)deleteIfNeededWithContext:(id)arg1;
- (void)createIfNeededWithContext:(id)arg1;
- (id)description;
@property(readonly, nonatomic) PAOpenGLDevice *device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

