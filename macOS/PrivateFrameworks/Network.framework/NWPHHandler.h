//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject
{
    NSArray *_allowedEntitlementGroup;
    CDUnknownFunctionPointerType _handlerFunction;
}

- (void).cxx_destruct;
@property CDUnknownFunctionPointerType handlerFunction; // @synthesize handlerFunction=_handlerFunction;
@property(retain) NSArray *allowedEntitlementGroup; // @synthesize allowedEntitlementGroup=_allowedEntitlementGroup;
- (id)initWithHandlerFunction:(CDUnknownFunctionPointerType)arg1 allowedEntitlementGroup:(id)arg2;

@end

