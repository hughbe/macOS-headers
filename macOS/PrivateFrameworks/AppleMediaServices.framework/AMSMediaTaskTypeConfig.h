//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskTypeConfig : NSObject
{
    _Bool _includePlatform;
    NSString *_hostBagKey;
    long long _type;
    NSString *_typeString;
}

+ (id)configForType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) _Bool includePlatform; // @synthesize includePlatform=_includePlatform;
@property(readonly) NSString *hostBagKey; // @synthesize hostBagKey=_hostBagKey;
- (id)initWithType:(long long)arg1 typeString:(id)arg2 hostBagKey:(id)arg3 includePlatform:(BOOL)arg4;

@end

