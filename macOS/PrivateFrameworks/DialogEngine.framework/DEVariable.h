//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEVariable : NSObject
{
    shared_ptr_695b9c0c _This;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_695b9c0c This; // @synthesize This=_This;
- (id)toString:(int)arg1;
- (BOOL)isEmpty;
@property NSString *type;
@property NSString *name;
- (shared_ptr_695b9c0c *)getSharedPtr;
- (id)initWithSharedPtr:(shared_ptr_695b9c0c *)arg1;
- (id)init;

@end

