//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface PKDispatchAfterBlocks : NSObject
{
    id <NSCopying> _identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void)cancelAll;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

