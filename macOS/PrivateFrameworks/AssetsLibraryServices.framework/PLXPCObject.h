//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PLXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (BOOL)supportsSecureCoding;
+ (struct _xpc_type_s *)type;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;

@end

