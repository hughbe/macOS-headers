//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEHmac : NSObject
{
    CDStruct_43cfb2c2 _context;
}

+ (BOOL)verify:(id)arg1 computed:(id)arg2;
@property(nonatomic) CDStruct_43cfb2c2 context; // @synthesize context=_context;
- (id)finalize;
- (void)write:(id)arg1;
- (id)initWithkey:(id)arg1 iv:(id)arg2;

@end

