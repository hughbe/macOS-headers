//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SLSecureCursorAssertion : NSObject
{
    NSUUID *_uuid;
}

+ (void)invalidateAll;
+ (id)assertion;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)dealloc;

@end

