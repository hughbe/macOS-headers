//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryAtomicType-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface XQueryHexBinary : NSObject <XQueryAtomicType>
{
    NSData *_data;
}

+ (id)binaryWithString:(id)arg1;
+ (id)binaryWithData:(id)arg1;
+ (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)arg1 forContext:(id)arg2;
- (id)stringValue;
- (long long)XQueryTypeID;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

