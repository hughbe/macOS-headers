//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSMapTable:(id)arg1;

@end

